#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    float p[30],a[30];
    int i=0;

    for(i; i<30; i++){
        printf("%dª Pessoa\n",i+1);

        printf("Peso: ");
        scanf("%f",&p[i]);

        printf("Altura: ");
        scanf("%f",&a[i]);

        printf("\n");
    }

    for(i = 0; i < 30; i++)
        printf("IMC da %dª pessoa: %.2f\n",i+1 ,p[i]/(a[i]*a[i]));
}

