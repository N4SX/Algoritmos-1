#include <stdio.h>
#include <stdlib.h>


int main(){
	
	struct pessoa{
		
		char nome [50];
		double altura;
		double peso;
		int rg;
	
};

int num, i, a, nrg;
double imc;

printf("Digite a quantidade de pessoas: \n");
scanf("%d", &num);
	
	struct pessoa aux[num];
	
	for (i = 0; i < num; i++){
		
		printf("\n\nDigite o nome da pessoa %d\n", i+1);
		setbuf(stdin,NULL);
		scanf("%[^\n]s", &aux[i].nome);
		
		printf("\nDigite a altura da pessoa %d (em metros)\n", i+1);
		scanf("%lf", &aux[i].altura);
		
		printf("\nDigite o peso da pessoa %d\n", i+1);
		scanf("%lf", &aux[i].peso);
		
		printf("\nDigite o numero do RG da pessoa %d\n", i+1);
		scanf("%d", &aux[i].rg);
		
	}
	
	printf("\nDigite o numero do RG de uma das pessoas anteriores: \n");
	scanf("%d", &nrg);
	
	
	for (i = 0; i < num; i++){
		
		if (nrg == aux[i].rg){
			
			printf("\nNome: %s", aux[i].nome);
			
			imc = aux[i].peso / (aux[i].altura * aux[i].altura);
			
			printf("\n\nIMC: %.2f", imc);
			return 0;	
		
			
		}
	}
	
	if (nrg != aux[i].rg){
		
		printf("RG Invalido !");
	}

	return 0;
}
