#include <stdio.h> //include styandard inpuit output 

int main() {  //main integer something 
    int number;


    printf("Enter a number: "); //ask user to input number 
    scanf("%d", &number); //user inputs number 

    if (number > 0) { //it the number is greater than zero check 
        printf("The number is positive.\n"); //print on the sccreen the message in quotes 
    } else { //check if otherwise 
        printf("The number is non-positive.\n"); //print on the screen the message in quotes 
    }

    return 0;
}

