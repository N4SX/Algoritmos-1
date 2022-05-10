#include <stdio.h>
#define MAX 10

void main(){
	
      int vet[MAX];
      int n,i;
      
      scanf("%d", &n);
      for ( i = 0; i <= 9; i++ ){  
	   
         vet[MAX] = n;
         printf("\nN[%d] = %d",i,vet[MAX]);
         n = n*2;
      }   
}
