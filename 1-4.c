#include <stdio.h>

int main()

{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 1;

    celsius = lower;
    while (fahr <= upper){
        fahr = celsius / (5.0 / 9.0) + 32.0;
	printf("%3.0f %6.1f\n", celsius, fahr);
	celsius = celsius + step;
    }

    return 0;
}
