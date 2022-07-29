#include "major1.h"
int main(){
    int choice=-1; //used for the case statement to select from menu
    unsigned int userInput;  //used to get integer input from the user
    unsigned int userInput2; //used if Rotate function is selected, to get the rotate amount

    while(choice != 5){ //if -5 is entered, program is over
    printf("(1) Count Leading Zeores\n(2) Endian Swap\n(3) Rotate-right\n(4) Parity\n(5) EXIT\n"); //print out menu
    scanf("%d", &choice); //user selects from menu 
    switch(choice){

        case 1:
            clz();
            break;
        case 2: 
            //insert code for Endian Swap
            break;
        case 3:
            printf("Enter a 32-bit number (between 1 and 4294967295, inclusively): ");  
            scanf("%u", &userInput);        //get the input from the user of the number to rotate
            printf("Enter the number of positions to rotate the input right (between 0 and 31, inclusively): ");    
            scanf("%u", &userInput2);   //get the input from the user of the amount to rotate by
            RotateRight(userInput, userInput2);     //pass variables to Rotate function
            break;
        case 4:
            parity();
            break;
        case 5: //program is over when 5 is entered
            printf("Program terminating... Peace out :P\n");
            break;
        default:
            printf("Error: Invalid option. Please try again.\n");
            break;
    }
}
    return 0;
}