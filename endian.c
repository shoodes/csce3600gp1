//Douglas Parks, DIP0013
#include <stdio.h>


//The following function with do the swap of the numbers and return the new values
//NOTE: This only works with an input of 4 integers
//If a 5th is inputted, it will not be outputted

void endian_swap (unsigned char *value)
{
  unsigned char tmp;

	//Uses a temp value to swap
  tmp = value[0];
  value[0] = value[3];
  value[3] = tmp;

	//Same process, but with 1 and 2
  tmp = value[1];
  value[1] = value[2];
  value[2] = tmp;
}
