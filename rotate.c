#include <stdio.h>
#include "major1.h"

unsigned int rotates(unsigned int num, unsigned int rot) {
    //rot %= 32;  // ensure rot is between 0 and 31
    return (num >> rot) | (num << (32 - rot));
}

void rotate() {
    unsigned int num, rot;
    printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively):  ");
    scanf("%u", &num);
    printf("Enter number of bits to rotate: ");
    scanf("%u", &rot);
    unsigned int result = rotates(num, rot);
    printf("Result: %u\n", result);
}
