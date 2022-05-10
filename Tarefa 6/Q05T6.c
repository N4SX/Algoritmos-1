#include <stdio.h>

//Leia um valor inteiro N, a seguir leia N números digitados pelo usuário, e mostre o produtório, o maior e o menor desses números.
int main(){

    int n, produto = 1, menor = 1, maior = 0 ;

   do{
    if(n != 0){
    printf(" informe um numero :\n");
    scanf("%d",&n);
        if(n!= 0){
        produto = produto * n ;
            if(n > maior){
                maior = n;
            }else{
                menor = n ;
            }
        }
    }
   }while(n != 0);

   printf(" produto = %d\n",produto);
   printf(" maior = %d\n", maior);
   printf(" menor = %d\n", menor);

return 0;
}
