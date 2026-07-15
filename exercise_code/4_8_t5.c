#include <stdio.h>
int main(void)
{
    float speed, size;

    printf("请输入文件大小(单位:MB):");
    scanf("%f", &size);
    printf("请输入下载速度(单位:Mb/s):");
    scanf("%f", &speed);
    printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed, size);
    printf("downloads in %.2f seconds.", size * 8 / speed);

    return 0;
}