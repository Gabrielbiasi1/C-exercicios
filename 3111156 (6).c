#include<stdio.h>
#include<math.h>

int main(){
	float pi,raio,h;
	scanf("%f%f", &raio, &h);
	double raio2 = pow(raio,2);
	pi = 3.14;
	printf("%.1f", pi*raio2*h);
	
}
