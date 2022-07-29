/* 	Author: Jalen Alexander (jalenalexander@my.unt.edu)
 	Date: 10/08/20
	Instructor: Prof. Yang (CSCE 3600.002)
	Description: This program accepts two arguments, one that has the number to be rotated, and the other is the amount of bits to rotate by. It then uses bitwise operators to rotate the given number to the right, and print out the result. 
*/
#include "major1.h"

void RotateRight(unsigned int num, unsigned int shift)
{
	unsigned int result;	//this will hold the result of the rotate
	unsigned int op1, op2;	//these are the two binary numbers to OR
	
	op1 = num >> shift;		//shift the original number by the given amount of bits to the right
	op2 = num << (32 - shift); //shift the number the other way, the numbers that fell off of the original number will be on the left end, the given number of bits to shift by is subtracted from 32 since int is 32 bits in this case
	
	result = op1 | op2;  //OR the two numbers together to put the numbers that fell off but on the left end

	printf("The result of %u rotated by %u positions is: %u.\n", num, shift, result);  //output the result of the rotate
	
}
