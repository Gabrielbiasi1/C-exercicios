#include <stdio.h>

int main()
{

	float a1,a2,a3,a4;
	float mpond, media;
	scanf("%f%f%f%f", &a1,&a2,&a3,&a4);
	mpond = a1*1+a2*2+a3*3+a4*4;
	media = mpond/10;
	printf("%.1f", media);
	return 0;
	

}
