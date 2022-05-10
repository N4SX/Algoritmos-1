#include <stdio.h>

void main(){
	
int quanti;
float preco;

printf("Informe a quantidade desejada: ");
scanf("%d",&quanti);

if(quanti <= 12){
	preco = 1.3;
	
   }else{
	preco = 1.0;
	
  }	
	printf ("O custo total eh %.2f", quanti*preco);
	
 }