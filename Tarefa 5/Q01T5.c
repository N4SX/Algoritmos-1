#include <stdio.h>

void main(){
	
    int opcao;
    
printf("Informe sua regiao de destino: \n");
printf("1 - Regiao Norte \n");
printf("2 - Regiao Nordeste \n");
printf("3 - Regiao Centro-Oeste \n");
printf("4 - Regiao Sul \n");
scanf("%i", &opcao);

switch (opcao){
	
case 1:
    printf("Ida: 500 R$ \nida e volta: 900 R$ \n");
    break;

case 2:
    printf("Ida: 350 R$ \nida e volta: 650 R$ \n");
    break;

case 3:
    printf("Ida: 350 R$ \nida e volta: 600 R$ \n");
    break;
    
case 4:
    printf("Ida: 300 R$ \nida e volta: 550 R$ \n");
    break;        
}

}