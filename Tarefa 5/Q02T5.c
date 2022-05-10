#include <stdio.h>

int main(){
	
	float sal;
	int mt, classe, class1, class2, class3;

	printf("Digite o salario");
	scanf("%f",&sal);

	printf("Digite meses trabalhados: \n");
	scanf("%d",&mt);

	printf("Informe a classe:\n");
	printf("1 - Classe 1\n");
	printf("2 - Classe 2\n");
	printf("3 - Classe 3\n");
	scanf("%d",classe);	

	class1 = sal*mt*0.21;
	class2 = sal*mt*0.25;
	class3 = sal*mt*0.3;

	switch (classe){
		
		case 1:
			printf("Seu desconto na classe 1 : %d", class1);
			break;

			case 2:
			printf("Seus desconto na classe 2 : %", class2);
			break;

			case 3:
			printf("Seu desconto na classe 3 : %d", class3);
			break;
											
	}
	return 0;
}