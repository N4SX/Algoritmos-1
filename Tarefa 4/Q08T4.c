#include <stdio.h>

void main(){
	
int h1, h2, m1, m2, soma, mult, hv, mv, hn, mn;

printf("Informe a idade do primeiro homen: ");
scanf("%d",&h1);
printf("Informe a idade do segundo homen: ");
scanf("%d",&h2);

printf("Informe a idade da primeira mulher: ");
scanf("%d",&m1);
printf("Informea idade da segunda mulher: ");
scanf("%d",&m2);

if(h1> h2){
	printf("A idade do homen mais velho eh: %d\n",h1);
	hv = h1;
	hn = h2;

}else{
	printf("A idade do homen mais velho eh: %d\n",h2);
	hv = h2;
	hn = h1;

if (h1< h2){
	printf("A idade do homen mais novo eh: %d\n",h1);
	hn = h1;

}else{
	printf("A idade do homen mais novo eh: %d\n",h2);
	hn = h2;
	
}	
	
}

if(m1> m2){
    printf("A idade da mulher mais velha eh: %d\n",m1);
	mv = m1;
	mn = m2;

}else{
	printf("A idade da mulher mais velha eh: %d\n",m2);
	mv = m2;
	mn = m1;

if(m1< m2){
	printf("A idade da mulher mais nova eh: %d\n",m1);
	mn = m1;

}else{
	printf("A idade da mulher mais nova eh: %d\n",m2);
	mn = m2;
}	
			
}	
 soma = hv+mn;
 printf ("A soma do homen velho com a mulher nova eh %d\n",soma);
 mult = hn*mv;
 printf ("O produto da idade do homen novo com a mulher velha eh %d\n",mult);
	
}