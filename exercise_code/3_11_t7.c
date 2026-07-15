#include <stdio.h>
int main(void)
{
	float in, cm;
	
	printf("请输入身高（英寸）：");
	scanf("%f", &in);
	printf("你的身高为：%.2f厘米", cm = in * 2.54);
	
	return 0;
}
