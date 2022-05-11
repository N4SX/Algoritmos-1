#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int distancia(void);

struct ponto{
	
	double x1, x2, y1, y2;
	
	};
	struct ponto cord;
	
	double d;

int main(){
	
	int distancia(void);
	
	printf("Digite dois pontos (x1 e x2)\n");
	scanf("%lf %lf", &cord.x1, &cord.x2);

	printf("Digite dois pontos (y1 e y2)\n");
	scanf("%lf %lf", &cord.y1, &cord.y2);
	
	distancia();

	printf("\nA distancia euclidiana eh: %.2f", d);
	
return 0;

}

int distancia(void){
	
		d = sqrt(((cord.x1-cord.x2))*(cord.x1-cord.x2)+((cord.xy1-cord.y2)*(cord.y1-cord.y2)));
		
return d;
	
}