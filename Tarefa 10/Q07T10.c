#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mdc(int a, int b);

int main(){
	
	int mdc(int a, int b);
	int c, d;
	
	printf("Digite o primeiro numero: \n");
	scanf("%d", &c);
	
	printf("Digite o segundo numero: \n");
	scanf("%d", &d);
	
	mdc (c, d);
	
return 0;

}

int mdc(int a, int b){
    
    while (a != b){
    	
        if (a > b){
        	
        	a = a - b;
		} 
		
        else{
        	
        	b = b - a;
		}
	}
       printf("Maximo Divisor comum: %d\n", a);
       
}