#include "major1.h"

int main(){
	        printf("Enter your input value");// print statement
	        int user_input;// var for userinput
	        int *p = &user_input; //pointer
	        scanf("%d",p);//scan
	        printf("Your input value is: %d\n", user_input); //test
	        Parity(user_input);//call to method
}

int Parity(int input){
	        int binary[8]; //binary array integer
	        int parityCheck = 0; // used to check parity,
        	for(int i = 0; i<=7; i++){
		        binary[i] = input%2;
		        input = input/2;
		        parityCheck = parityCheck ^ binary[i];
	        }
	        if(parityCheck == 0){
		        printf("Your input value has an even parity.\n");
		        return 0;
	        }
	        else{
		        printf("Your input value has an odd parity.\n");
		        return 1;
	        }
}
