#include <stdio.h>

int main()
{
  int c;
  int a = 10;
  c = a ++;
  printf("先赋值后运算：\n");
  printf("LIne 1 - c 的值是 %d \n", c);
  printf("LIne 2 - a 的值是 %d \n", a);

  a = 10;
  c = a --;
  printf("LIne 3 - c 的值是 %d \n", c);
  printf("LIne 4 - a 的值是 %d \n", a);

  printf("先运算后赋值：\n");
  a = 10;
  c = ++ a;
  printf("LIne 5 - c 的值是 %d \n", c);
  printf("LIne 6 - a 的值是 %d \n", a);

  a = 10;
  c = --a;
  printf("LIne 7 - c 的值是 %d \n", c);
  printf("LIne 8 - a 的值是 %d \n", a);
}
