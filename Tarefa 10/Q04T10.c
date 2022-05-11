#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float n1, n2;

int menor(void);

int main(){
	
	printf("digite dois numeros: ");
	scanf("%f  %f", &n1, &n2);
	
	menor();
		
	return 0;
}

 menor(){

	if (n1>n2){
		
	printf("O menor numero eh: %.2f", n2);
		
	}else{
		
		
	printf("O menor numero eh: %.2f", n1);
	
	}
	
}