#include <stdio.h>

int total;

void posicao(int i, int n)
{
      if(i == 1 && total) // Tratando para ele não sair na primeira vez
         return;
      total++;
      int mid = n / 2;
      return i <= mid ? posicao(2 * i, n) : posicao(i - (n - i + 1), n);
}

int main(){
	
	int n;
	scanf("%d", &n);
	total = 0;
	posicao(1, n); // Poderia ser qualquer número
	printf("%d\n", total);

    return 0;
}
