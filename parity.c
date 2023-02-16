//Dewey Holland Dah0318 Spring2023 CSCE3600

#include "major1.h"

/*
int main(){
	printf("Enter your input value");
	int user_input;
	int *p = &user_input;
	scanf("%d",p);
	printf("Your input value is: %d\n", user_input); //test
	Parity(user_input);
}
*/

void parity(unsigned int input){

	printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
	int user_input;
	int *p = &user_input;
	scanf("%d",p);
 
	unsigned int binary[8]; 
	unsigned int parityCheck = 0;
	for(int i = 0; i<=7; i++){
		binary[i] = input%2;
		input = input/2;
		parityCheck = parityCheck ^ binary[i];
	}
	if(parityCheck == 0){
		printf("Parity of the input value is : 0 \n");
	}
	else{
		printf("Parity of the input value is : 1 \n");
	}
}
