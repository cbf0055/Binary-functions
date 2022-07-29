/* 	Author: Chandler Franklin
 	Date: 10/08/20
	Instructor: Prof. Yang (CSCE 3600.002)
\*/
#include "major1.h"
void parity()
{
    unsigned int user_input=0; //used to store binary integer given by the user
    int i; //iterator for loops
    int binary[31]; //string to store and count number of ones in the user inputed number
    int number_of_ones=0; //counts number of ones to determine parity
  
    while(user_input<=0){
    printf("Enter an integer between 1 and 4294967296: "); //asking user for input
    scanf("%d", &user_input);
    }
    

   for(i=31;i>=0;--i){ //stores the 32 bit binary number into string
        if(user_input&1<<i){
            binary[i]=1;
        }
        else{
            binary[i]=0;
        }
        
    }
    for(int j=31;j>=0;--j){
        //printf("%d", string[j]); //prints binary number 
        if(binary[j]==1){
            ++number_of_ones; //counts the number of ones in the string
        }
    }
    if(number_of_ones%2==0){ //determines if parity is even or odd and prints out to the screen
        printf("Parity of %d is 0\n", user_input); //0 if even parity
    }
    else
    {
        printf("Parity of %d is 1\n", user_input);//1 for odd parity
    }
    
}