#include <stdio.h>

int main()
{
	float kwh, conta;
	char s;
	scanf("%f%s", &kwh, &s);
	conta = kwh*1.5;
	if(s == 's'){
		printf("%.1f", conta *0.85);
	}
	else{
		printf("%.1f", conta);
		
	}
}

