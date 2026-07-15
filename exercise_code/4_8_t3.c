#include <stdio.h>
int main(void)
{
    float input;

    printf("Please enter a floating number:\n");
    scanf("%f", &input);
    printf("The input is %.1f or %.1e\n", input, input);
    printf("The input is %+f or %E\n", input, input);

    return 0;
}