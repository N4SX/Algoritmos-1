#include <stdio.h>

int main(){

    int a;

    printf("Informe o numero da regiao:\n");
    printf("\n1=Regiao Norte\n \n2=Regiao Nordeste\n \n3=Regiao Centro-Oeste\n \n4=Regiao Sul\n");
    scanf("%i", &a);

    if(a == 1){

        printf("Regiao Norte:\n");
        printf("Ida 500, Ida e Volta 900");
    }else if(a == 2){

        printf("Regiao Nordeste:\n");
        printf("Ida 350, Ida e Volta 650");
    }else if(a == 3){

        printf("Regiao Centro-Oeste:\n");
        printf("Ida 350, Ida e Volta 600");
    }else if(a == 4){

        printf("Regiao Sul:\n");
        printf("Ida 300, Ida e Volta 550");
    }

    return 0;
}