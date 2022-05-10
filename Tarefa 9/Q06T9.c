#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	struct data{
		int dia, mes, ano, dia2, mes2, ano2;
	};

	int quar;
	
	struct data dif;
	
	printf("Insira o dia de inicio: \n");
	scanf("%d", &dif.dia);
	printf("Insira o mes inicio: \n");
	scanf("%d", &dif.mes);
	printf("Insira o ano inicio: \n");
	scanf("%d", &dif.ano);
	
	printf("\nInsira o dia final: \n");
	scanf("%d", &dif.dia2);
	printf("Insira o mes final: \n");
	scanf("%d", &dif.mes2);
	printf("Insira o ano final: \n");
	scanf("%d", &dif.ano2);
	
	quar = (dif.dia + dif.dia2);
	
	if (quar <= 40 && dif.ano <= dif.ano2  && dif.mes <= 12 && dif.dia <= 31){
		
		printf("Dias de quarentena: %d", quar);
		
	} else if (quar > 40 || dif.ano > dif.ano2 || dif.mes > 12 || dif.dia > 31 || dif.dia2 > 31 || dif.mes2 > 12){
		
		printf("Ultrapassa quarentena / Data invalida ! ");
		
	}
	return 0;
}
