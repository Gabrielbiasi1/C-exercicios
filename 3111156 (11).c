#include <stdio.h>

int main()
{
	int a,b,c,result;
	scanf("%d%d%d", &a,&b,&c);
	result = a+b;
	if (result > c){
		printf("maior");
	}
	else{
		printf("menor");
	}
	return 0; 
	
}
