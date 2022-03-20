#include <stdio.h>
 
int main() {

 	int cod, num, cod2, num2;
	float valor, valor2, result;
    

    scanf("%i", &cod);
    scanf("%i", &num);
    scanf("%f", &valor);
    
    scanf("%i", &cod2);
    scanf("%i", &num2);
    scanf("%f", &valor2);
    
   result = ((num * valor) + (num2 * valor2));
   
    printf("VALOR A PAGAR: R$ %.2f\n", result );
 
    return 0;
}

