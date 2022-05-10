#include <stdio.h>

void main(){
    
	int num, qntdivisores = 0, i, qntprimos = 0;

    while (1){
    	
        printf("\nDivisores de um numero.\n\n");
        printf(" Insira um numero: ");
        scanf("%d", &num);
        if(num == -1){
            printf("Quantidade de numeros primos: %d", qntprimos);
            break;
        }
        
        printf("\n D(%d): ", num);
        for (i = 1; i <= num; ++i) {
            if (num % i == 0) {
                printf(" %d ", i);
                qntdivisores++; 
            }
        } 
        printf("\n\n Numero de divisores: %d\n\n", qntdivisores);

        if (qntdivisores == 2)
        {
            printf("%d eh um numero primo\n", num);
            qntprimos++;
        }else {
            
			printf("%d nao eh um numero primo\n", num);
        }
        qntdivisores = 0;
    }
    
}
