#include<stdio.h>
#include<string.h>
#include <stdlib.h>

#define MAX 50
#define qtnaipes 4
#define qtcartas 52
#define qtvalores 13

int main(){
	
	struct carta{
		
		char naipe[MAX];
		char valor[MAX];
};

struct tiposcartas{
	
		char naipe[qtnaipes][MAX] = {"Paus", "Espadas", "Ouros", "Copas"};
		char valor[qtvalores][MAX] = {"As", "Dois", "Tres", "Quatro", "Cinco", "Seis", "Sete", "Oito", "Nove", "Dez", "Valete", "Dama", "Rei"};
};
	struct carta deck[qtcartas];
	struct tiposcartas var;
	int i, a, cont = 0;
	
	for(i=0; i<qtnaipes; i=i+1){
		
		for(a=0; a<qtvalores; a=a+1){
			
			strcpy(deck[cont].valor, var.valor[a]);
			strcpy(deck[cont].naipe, var.valor[i]);
			cont ++;
		}
	}
	
		for(i=0; i<qtcartas; i=i+1){
			
				printf("%s de %s\n", deck[i].valor, deck[i].naipe);
		}
	return 0;
}
