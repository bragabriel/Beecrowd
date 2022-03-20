#include <stdio.h>

int main(){
	
	int duracao_seg, minutos, horas; 
	
	scanf("%d",&duracao_seg);

	horas = duracao_seg / 3600;
	minutos = (duracao_seg - (horas * 3600)) / 60;
	duracao_seg = (duracao_seg - (horas * 3600) - (minutos * 60));
	
	printf("%d:%d:%d\n", horas, minutos, duracao_seg);
	
	return 0;
}
