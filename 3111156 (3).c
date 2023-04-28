#include <stdio.h>

int main()
{
	int num1, num2, ad, sub, mult;
	scanf("%d%d", &num1,&num2);
	ad = num1+num2;
	sub = num1-num2;
	mult = num1*num2;
	printf("%d,%d,%d", ad,sub,mult);
	return 0;
}
