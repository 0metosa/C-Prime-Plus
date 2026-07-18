#include <stdio.h>
#define MIN_PER_HOUR 60
int main(void)
{
    int min;
    int hou, mmin;

    //先执行一遍再进入循环，进入循环后先处理数据
    printf("请输入分钟数(输入0退出):");
    scanf("%d", &min);

    while (min > 0)
    {
        mmin = min % MIN_PER_HOUR;
        hou = min / MIN_PER_HOUR;
        printf("%d分钟等于%d小时%d分钟\n", min, hou, mmin);
        printf("请输入分钟数(输入0退出):");
        scanf("%d", &min);
    }
    printf("bye");

    return 0;
}