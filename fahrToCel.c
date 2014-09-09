#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
	int cel;
	for(int fahr = 0; fahr <= UPPER; fahr = fahr + STEP)
	{
		printf("%d \t %6.1f \n", fahr, (9.0/5.0)*(fahr-32.0));
	}
	
}