#include <stdio.h>
#define DAYS_PER_WEEK 7
int main(void)
{
    int days, weeks, remain_days;

    printf("请输入天数(输入0退出):");
    scanf("%d", &days);

    while (days > 0)
    {
        weeks = days / DAYS_PER_WEEK;
        remain_days = days % DAYS_PER_WEEK;

        printf("%d天是%d周%d天\n", days, weeks, remain_days);
        printf("请输入天数(输入0退出):");
        scanf("%d", &days);
    }

    printf("bye");

    return 0;
}