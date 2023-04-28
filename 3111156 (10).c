#include <stdio.h>
#include <math.h>

int main(){
	float re1,re2,re3,p1,p2,p3;
	scanf("%f%f%f", &p1,&p2,&p3);
	re1 = p1*7800;
	re2 = p2*7800;
	re3 = p3*7800;
	printf("%.1f,%.1f,%.1f", re1,re2,re3);
	return 0;
}
