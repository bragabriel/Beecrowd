#include <stdio.h>

int main(){
	
	int horaInicial, horaFinal, duracao;
	
	scanf("%d", &horaInicial);
	scanf("%d", &horaFinal);
	
	//horario final < horario inicial
	if(horaFinal <= horaInicial)

		duracao = ( 24 - horaInicial) + horaFinal;
	
	//horario final > horario inicial
	else 
		duracao = horaFinal - horaInicial;
	
	printf("O JOGO DUROU %d HORA(S)\n", duracao);
	
	return 0;
}


