#include <stdio.h>
#include <float.h>
int main(void)
{
    double number1 = 1.0/3.0;
    float number2 = 1.0/3.0;

    printf("%.6f %.12f %.16f\n", number1, number1, number1);
    printf("%.6f %.12f %.16f\n", number2, number2, number2);
    printf("%d %d", FLT_DIG, DBL_DIG);

    return 0;
}