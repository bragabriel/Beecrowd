#include <stdio.h> 

int main()
{
    int N, cont, cubo, quadrado;
    
	scanf("%d", &N);
    
	for(cont=1; cont<=N; cont++)
    {
        quadrado = cont*cont;
        cubo = cont*cont*cont;
        
        printf("%d %d %d\n", cont, quadrado, cubo);
    }
    
	return 0;
}
