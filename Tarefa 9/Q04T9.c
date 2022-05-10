#include<stdio.h>
#include<math.h>

struct pontos{
	
	float X;
	float Y; 
};

int main(){
	
	struct pontos cartesianos[2];
	int i;
	float d=0.0;
	for(i=0;i<2;i=i+1){
		
		printf("\nponto x: ");
		setbuf(stdin,NULL);
		scanf("%f", &cartesianos[i].X);
		printf("ponto y: ");
		setbuf(stdin,NULL);
		scanf("%f", &cartesianos[i].Y);
	}
	d=sqrt(pow(cartesianos[1].X-cartesianos[0].X, 2) + pow(cartesianos[1].Y-cartesianos[0].Y, 2));
	printf("\ndistancia: %f", d);
	
	return 0;
}
