#include <stdio.h>
#define MAX 100   // definindo o tamanho do vetor maximo de 100 caracteres

void main(){
	
int i=0;
char nome[MAX];
scanf("%[^\n]s", nome);

while(nome[i] != ' '){
	
if(nome[i]=='r'){
	
nome[i]='l';
	}
i=i+1;
}

printf("%s",nome);

}
