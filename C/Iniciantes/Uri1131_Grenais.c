#include <stdio.h>

int main () {
	
  grenal();

}

int grenal () {

  int opcao = 0;
  int golInter = 0, golGremio = 0, vitInter = 0, vitGremio = 0, empate = 0, grenais = 0;

	while(1){
    scanf("%d %d", &golInter, &golGremio);
    	
    grenais++;
    golInter += golInter;
    golGremio += golGremio;
    
    if(golInter>golGremio){
    	vitInter++;
	}
	else if(golGremio==golInter){
		empate++;
	}
	else{
		vitGremio++;
	}
	
  	opcao = 0;
	
    	printf("Novo grenal (1-sim 2-nao)\n");
    	scanf("%d", &opcao);
    	if(opcao==1){
    		continue;
		}
		if(opcao==2){
    		break;
		}
	}//fim while
  
  printf("%d grenais\n", grenais);
  printf("Inter:%d\n", vitInter);
  printf("Gremio:%d\n", vitGremio);
  printf("Empates:%d\n", empate);
  
  if(vitInter>vitGremio){
  	printf("Inter venceu mais\n");
  }
  else if(vitGremio>vitInter){
  	printf("Gremio venceu mais\n");
  }
  else{
  	printf("Nao houve vencedor\n");
	}
  
return 0;
}
