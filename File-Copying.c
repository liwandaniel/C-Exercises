#include <stdio.h>

/* copy input to output; 1st version */

int main()
{
	int c;

	while ((c = getchar())!= EOF) 
		putchar(c);
	printf("value of c:%d",c);

	return 0;
}
