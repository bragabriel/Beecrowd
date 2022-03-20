#include <stdio.h>

int main(){
	
	float a, b, c;
	float perimetro, areaTrapezio;
	
	scanf("%f %f %f", &a, &b, &c);
	
	if ((((a+b) > c) && ((a+c)> b) && ((b+c)> a) && (a > 0) && (b > 0) && (b > 0))){
		perimetro = a + b + c;
		printf("Perimetro = %.1f\n", perimetro);	
	}
	
	else{
		areaTrapezio = ((a+b)*c)/2;
		printf("Area = %.1f\n", areaTrapezio);
	}	
return 0;
}
