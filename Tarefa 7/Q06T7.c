#include<stdio.h>

void main(){
	
    int vetor[12];
    int i;
    int x, y;
 
    for(i = 0; i < 12; i++){
        printf("Digite o numero da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
 
    printf("Posicao X: ");
    scanf("%d", &x);
    printf("Posicao Y: ");
    scanf("%d", &y);
    printf("O numero contido na posicao %d eh %d.\nO numero contido na posicao %d eh %d.\n", x, vetor[x], y, vetor[y]);
    printf("%d + %d = %d\n\n", vetor[x], vetor[y], vetor[x] + vetor[y]);

}
