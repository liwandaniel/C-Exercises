#include <stdio.h>

extern int count;

void write_extern(void)
{
  printf("coutn is %d \n", count);
}
