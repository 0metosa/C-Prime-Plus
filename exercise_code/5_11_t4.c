#include <stdio.h>
#define INCH_PER_CM 0.393701
int main(void)
{
    float cm, inches;
    int feet;

    printf("Please enter a height in centimeters:");
    scanf("%f", &cm);

    while (cm > 0)
    {
        inches = cm * INCH_PER_CM;
        feet = inches / 12;
        inches = inches - feet * 12;

        printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inches);
        printf("Please enter a height in centimeters(<=0 to quit):");
        scanf("%f", &cm);
    }
    printf("bye");

    return 0;
}