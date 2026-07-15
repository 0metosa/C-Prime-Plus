#include <stdio.h>
int main(void)
{
    char name[30];
    float height;

    printf("What's your name?\n");
    scanf("%s", name);
    printf("%s, please enter your height(inch):\n", name);
    scanf("%f", &height);
    printf("%s, you are %g feet tall", name, height / 12);

    return 0;
}