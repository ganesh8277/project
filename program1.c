/* Pattern matching program.
*  
*  Input: 4
*
*  Output:
*         * * * *
*         * * * *
*         * * * *
*         * * * *
*/

#include<stdio.h>

void main()
{
	int i = 0, j = 0; // variables declaration
	
	for(i = 0; i <= 5; i++) // main loop
	{
		for(j = 0; j < i; j++) // inner loop
		{
			printf("* ");
		}
		printf("\n");
	}
} // main
