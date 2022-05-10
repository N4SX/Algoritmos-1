#include <stdio.h>
#define MAX 50

struct aluno{
	
	char nome[50];
	float ira;
	int ano_inicio;
};

void main(){
	
	struct aluno turma[MAX];
	int i, quant, aux, veterano;
	float total_ira;
	i = 0;
	veterano = 2022;
	total_ira = 0;
	
	printf("Informe a quantidade de alunos na turma: ");
	scanf("%d", &quant);
	system("cls");
	
	for (i=0; i<quant; i++){
		printf("Nome do 0%d Aluno: ", i+1);
		scanf("%s", turma[i].nome);
		setbuf(stdin, NULL);
		printf("Ira do 0%d Aluno: ", i+1);
		scanf("%f", &turma[i].ira);
		total_ira += turma[i].ira;
		setbuf(stdin,NULL);
		printf("Ano de inicio do 0%d Aluno: ", i+1);
		scanf("%d", &turma[i].ano_inicio); 
	
		if (turma[i].ano_inicio < veterano){
			veterano = turma[i].ano_inicio;
			aux = i;
			setbuf(stdin, NULL);
		}	
		
		setbuf(stdin, NULL);
		printf("\n");
	}	
	
	printf("Media da ira da turma: %.2f\n", (total_ira/quant));	
	printf("Nome do aluno veterano: %s\n", turma[aux].nome);
	printf("Ira do aluno veterano: %.2f\n", turma[aux].ira);
}
