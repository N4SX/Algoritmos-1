#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int primo(int num);

int main(){
	
	int primo(int num);
	int n;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	primo(n);
	
	return 0;

}

int primo(int num){
	
	int a=0, b, c, n, d; 
	 
	 d=num*(-1);
      
      printf("Os numero primos ate %d sao: ", num);
      
       do{
	   	
	   a=a+1;        
         c=0;
         for(b = 1; b < a; b++)
         
             if(a%b==0)
             c=c+1;
             
         if(c==1){
         	
        printf(" %i ", a);      
             
        }
        
      } while(a != num); 
           	
}