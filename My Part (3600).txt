#include <stdio.h>

unsigned int rotate(unsigned int num, unsigned int rot) {
    rot %= 32;  // ensure rot is between 0 and 31
    return (num >> rot) | (num << (32 - rot));
}

int main() {
    unsigned int num, rot;
    printf("Enter a number to rotate between  1  and  4294967295: ");
    scanf("%u", &num);
    printf("Enter number of bits to rotate: ");
    scanf("%u", &rot);
    unsigned int result = rotate(num, rot);
    printf("Result: %u\n", result);
    return 0;
}
