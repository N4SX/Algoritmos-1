#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float n1, n2, n3;

int menor(void);

int main(){
	
	printf("Digite tres numeros: ");
	scanf("%f  %f  %f", &n1,  &n2,  &n3);
	
	menor();

return 0;

}

 menor(){

	if (n1<n2 && n1<n3){
	printf("O menor numero eh: %.2f", n1);
		
	} 

	else if (n2<n1 && n2<n3){
	printf("O menor numero eh: %.2f", n2);
		
	} 

	else{
	printf("O menor numero eh: %.2f", n3);

	}
}
