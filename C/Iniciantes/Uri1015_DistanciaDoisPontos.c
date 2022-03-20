#include <stdio.h>
#include <math.h>

int main(){
	
	double x1, y1;
	double x2, y2;
	double result;
	
	scanf("%lf %lf", &x1, &y1);
	scanf("%lf %lf", &x2, &y2);

	result = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	
	printf("%.4f\n", result);
	
	return 0;
}
