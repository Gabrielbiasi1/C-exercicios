#include <stdio.h>

int main(){
	int ano;
	scanf("%d", &ano);
	if (ano % 4==0){
		printf("ano bissexto");
	}
	else{
		printf("nao bissexto");
	}
}
