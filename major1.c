// kevin le
#include "major1.h"

int main()
{
	int option = 0;
	while(option != 5)	
	{
		printf("Enter the menu option for the operation to perform: \n");
		printf("(1) Count Leading Zeroes\n");
		printf("(2) Endian Swap\n");
		printf("(3) Rotateright\n");
		printf("(4) Parity\n");
		printf("(5) EXIT\n");
		printf("--> ");

		scanf("%d", &option);

		switch(option) 
		{
			case 1:
			{
				clz();
				break;
			}
			case 2:
			{
				endian_swap();
				break;
			}
			case 3:
      {
        rotate right
				break;
      }
			case 4:
			{
				parity();
				break;
			}
			case 5:
			{
				printf("Program Terminating. Goodbye. \n");
				exit(0);
			}
			default:
			{
				printf("Error: Invalid Option. Please try another.\n");
				break;
			}
		}
	}
	return 0;
}
