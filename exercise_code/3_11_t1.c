#include <stdio.h>
int main(void)
{
	int i_toogig = 2147483647 + 1;
	float f_toobig = 3.4e38 * 100.0f;
	float f_toosmall = 0.1234e-10 / 10;
	
	printf("整数上溢：%d\n", i_toogig);
	printf("浮点数上溢：%f\n", f_toobig);
	printf("浮点数下溢：%.4f\n", f_toosmall);
	
	return 0;
}
