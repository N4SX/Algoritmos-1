#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potencia(float x, float n);

int main(){
	
	int potencia(float x, float n);
	float num1, num2;
	
	printf("Digite o valor de x: \n");
	scanf("%f", &num1);
		
	printf("Digite o valor de n: \n");
	scanf("%f", &num2);
	
	potencia(num1, num2);
	
return 0;	
}

int potencia(float x, float n){
	
	float pot;	
	pot = pow(x,n);
	
	printf("%.2f", pot);
}
