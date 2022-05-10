#include <stdio.h>
#include <stdlib.h>

void main(){
	
char nome[20];
int i=0;
scanf("%[^\n]s",nome);
while (nome[i] != '\0'){
	
    printf(" %c",nome[i++]);
}
  
}
