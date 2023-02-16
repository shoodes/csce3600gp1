#include <stdio.h>

// Define bit number to later use in the int swap
#define B0 0
#define B1 1
#define B2 2
#define B3 3

//This swap will swap the bit 0 and 3 and then bit 1 and B2

int swap(int number) {
	

    char *num = (char*)(&number);


    num[B0] = num[B0] ^ num[B3];
    num[B3] = num[B0] ^ num[B3];
    num[B0] = num[B0] ^ num[B3];


    num[B1] = num[B1] ^ num[B2];
    num[B2] = num[B1] ^ num[B2];
    num[B1] = num[B1] ^ num[B2];

    return number;
}

int endian() {
    int num;
    int num_done;

    printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
    scanf("%d", &num);
    
    num_done = swap(num);
    
    printf("Endian swap of %d gives %d\n", num, num_after_endian_swap);
    return 0;
}
