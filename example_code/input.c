#include <stdio.h>
int main(void)
{
    int age;
    float assets;
    char pet[30];

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets); //如果用scanf()读取基本变量类型的值，在变量名前加一个&
    scanf("%s", pet); //如果用scanf()把字符串读入字符数组中，不要使用&
    printf("%d $%.2f %s\n", age, assets, pet);

    return 0;
}