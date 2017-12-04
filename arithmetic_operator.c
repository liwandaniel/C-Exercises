#include <stdio.h>

int main()
{
  int a = 21;
  int b = 10;
  int c;

  c = a + b;
  printf("Line 1 - c 的值是 %d \n", c);
  c = a - b;
  printf("LIne 2 - c 的值是 %d \n", c);
  c = a * b;
  printf("LIne 3 - c 的值是 %d \n", c);
  c = a / b;
  printf("LIne 4 - c 的值是 %d \n", c);
  c = a % b;
  printf("LIne 5 - c 的值是 %d \n", c);
  c = a ++;
  printf("LIne 6 - c 的值是 %d \n", c);
  c = a --;
  printf("LIne 7 - c 的值是 %d \n", c);
}
