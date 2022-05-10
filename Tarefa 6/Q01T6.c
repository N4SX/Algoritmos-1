#include <stdio.h>

int main(){

    int n ;

    printf(" informe um numero inteiro \n ");
    scanf("%d", &n);

        while(n>0){
            printf(" \%d =", n%10);
            if((n%10)%2 == 0){
                printf(" par\n");
            }else{
                printf(" impar\n");
            }
            n = n / 10 ;
        }
return 0;
}
