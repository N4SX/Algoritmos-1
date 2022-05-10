#include <stdio.h>
#define MAX 10

int vet[MAX], maior=0, menor=999,i;

void main(){
	
     for (i= 0;i < MAX; i++){
      scanf("%d", &vet[i]); 
       if(vet[i] > maior){ 
        maior = vet[i];
   }
     if(vet[i] < menor){
         menor = vet[i];
     }
}
    for (i= 0;i < MAX; i++){
    	
     if(vet[i] == maior){ 
        vet[i] = menor;
	}else{
    	if(vet[i] == menor){
        vet[i] = maior;
    }
}
    printf("%d\n",vet[i]);
   }
}
