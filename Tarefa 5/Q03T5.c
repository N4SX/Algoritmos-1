#include<stdio.h>

int main(void){
	
	int n1,MA,MULT, n2;
	char menu;
	printf("Digite o primeiro numero: \n");
	scanf("%d", &n1);
	printf("Digite o segundo numero: \n");
	scanf("%d", &n2);
	printf("-----------MENU-----------\n");
	printf("A - Maior numero\n");
	printf("B - Menor numero\n");
	printf("C - Soma\n");
	printf("D - Media aritmetica\n");
	printf("E - Multiplicacao\n");
	printf("Digite a opcao que deseja: \n"); //Digite a opção em letra maiúscula 
	setbuf(stdin, NULL);
	scanf("%c", &menu);
	MULT= n1*n2;
	MA=	(n1+n2)/2;
	switch(menu){
		
		case 'A': //Maior numero
		if( n1>n2 ){
			printf(" %d eh maior\n", n1);
		}else if(n1<n2){
			printf(" %d eh menor\n", n2);
		}
		break;
		case 'B': //Menor numero
		if( n1>n2 ){
			printf(" %d eh maior\n", n2);
		}else if(n1<n2){
			printf(" %d eh menor\n", n1);
		}
		break;
		case 'C': //Soma
			{
			printf(" %d+%d=%d\n", n1, n2, n1 + n2);
		}
		break;
		case 'D': //Media aritmetica
			{
			printf(" %d",MA);
		}
		break;
	    case 'E': //Multiplicacao
	        {
	 	    printf(" %d ", MULT);
	    }
	    break;

    }

  return 0;
}
