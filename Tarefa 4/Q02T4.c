#include <stdio.h>

void main(){
	
float depo, taxa, rendi, rf;

printf ("Informe o valor do deposito: ");
scanf("%f", &depo);

printf("Informe o valor da taxa de juros: ");
scanf("%f", &taxa);

 rendi = (depo * (taxa/100));
 printf ("O rendimento eh: %.2f \n", rendi);
 
  rf=depo+rendi;
 printf ("O rendimento final eh: %.2f", rf);

}