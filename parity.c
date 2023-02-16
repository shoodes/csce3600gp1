

#include "major1.h

int main(){
	printf("Enter your input value");
	int user_input;
	int *p = &user_input;
	scanf("%d",p);
	printf("Your input value is: %d\n", user_input); //test
	Parity(user_input);
}

int Parity(unsigned int input){
	unsigned int binary[8]; 
	unsigned int parityCheck = 0;
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
