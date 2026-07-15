#include <stdio.h>
int main(void)
{
	float pint, cup, ounce, tablespoon, teaspoon;
	
	printf("Enter the num of cup: ");
	scanf("%f", &cup);
	printf("pint = %g\n", pint = cup / 2);
	printf("ounce = %g\n", ounce = cup * 8);
	printf("tablespoon = %g\n", tablespoon = ounce * 2);
	printf("teaspoon = %g\n", teaspoon = tablespoon * 3);
	//%g可以使小数点右侧的尾数0不被显示
	
	return 0;
}
