#include <stdio.h>

void main(){
	
float valor, lucro;

printf("Digite o valor da compra: ");
scanf("%f",&valor);

if(valor< 20,00 ){
	lucro = valor * 1.45;
	
}else{
   lucro = valor * 1.30;	
	
}	
	printf("O valor venda foi de: %.2f",lucro);
	
}