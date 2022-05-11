#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int imc (float peso, float altura);

int IMC;

int main(){
	
	int imc (float peso, float altura);
	float w, h;
	
		printf("Digite o peso: ");
		scanf("%f", &w);
		
		printf("Digite a altura: ");
		scanf("%f", &h);
		
		imc(w, h);
		
	printf("\nO IMC eh: %d", IMC);
return 0;
}

int imc (float peso, float altura){
	
	IMC = peso/(pow(altura,2));

return IMC;
}