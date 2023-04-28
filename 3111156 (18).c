#include <stdio.h>

int main()
{
	float num;
	scanf("%f", &num);
	if (num == 0 ){
		printf("nulo");
	}
	if(num > 0 ){
		printf("positivo");
		
	}
	if(num <0){
	
		printf("negativo");
	}
	return 0;
}
