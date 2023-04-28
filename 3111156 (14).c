#include <stdio.h>

int main()
{
	float a,b,media,medial;
	scanf("%f%f", &a,&b);
	media = a+b;
	medial = media/2;
	if(medial >5.9 )
	{
		printf("aprovado");
	}
	else
	{
		printf("reprovado");
	}
}
