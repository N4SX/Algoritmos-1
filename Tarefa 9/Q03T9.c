#include<stdio.h>

struct produto{
	
	char nome[50];
	int codigo;
	float preco; 
};

int main(){
	
	int i, n=0, code=0, po=0; 
	printf("quantidade de produtos: ");
	scanf("%d", &n);
	struct produto loja[n];
	for(i=0;i<n;i=i+1){
		
		setbuf(stdin,NULL);
		printf("\nnome do produto: ");
		scanf("%[^\n]s", loja[i].nome);
		printf("codigo: ");
		setbuf(stdin,NULL);
		scanf("%d", &loja[i].codigo);
		printf("preco: ");
		setbuf(stdin,NULL);
		scanf("%f", &loja[i].preco);
	}
	printf("\ncodigo do produto: ");
	scanf("%d", &code);
	for(i=0;i<n;i++){
		
		if(loja[i].codigo==code){
			
			po=i;
		}
	}
	printf("\nproduto: %s", loja[po].nome);
	printf("\npreco: R$ %.2f", loja[po].preco);
	
	return 0;
}
