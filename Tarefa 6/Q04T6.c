#include <stdio.h>

void main(){
char opc;
int num1, num2, maior, menor;

do{
printf("\nDigite o primeiro numero: ");
scanf("%d", &num1);
printf("\nDigite o segundo numero: ");
scanf("%d%*c", &num2);
printf("\n----------------------------\n MENU \n----------------------------\n A - Maior Numero \n B - Menor Numero \n C - Media Aritmetica \n D - Finalizar\n");
printf("Digite uma opcao exibida acima: ");
scanf("%c", &opc);

	switch (opc){
		case 'A':
			case 'a':
				if (num1 > num2){
				maior = num1;
				printf("O maior numero eh: %d", maior);
			} else {
				maior = num2;
				printf("O maior numero eh: %d", maior);
			} break;
	case 'B':
		case'b':
			if (num1 < num2){
				menor = num1;
				printf("O menor numero eh: %d", menor);
			} else {
				menor = num2;
				printf("O menor numero eh: %d", menor);
			} break;
	case 'C':
		case 'c':
			printf("A media aritmetica dos dois numeros eh de: %d", num1+num2/2);
			break;
	case 'D':
		case 'd':
			printf("\n\nOperacao finalizada !");
			exit (0);
			break;
			
	}
} while (opc != 'D' || opc != 'd');

}
