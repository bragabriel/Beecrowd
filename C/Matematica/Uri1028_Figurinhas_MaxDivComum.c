#include <stdio.h>
#include <math.h>

int mdc(int num1, int num2) {

    int resto;

    do {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

    } while (resto != 0);

    return num1;
}

int main(){
	
	int n, i, f1, f2, result;

	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d %d", &f1, &f2);
		
		result = mdc(f1, f2);
		
		printf("%d\n", result);
	}
	
	return 0;
}
