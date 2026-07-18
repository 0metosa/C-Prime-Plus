#include <stdio.h>
int main(void)
{
    int num;
    int times = 0;

    printf("Please enter a number:");
    scanf("%d", &num);

    while (times++ < 11)
    {
        printf("%d\n", num);
        num++;
    }

    return 0;
}