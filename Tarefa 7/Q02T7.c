#include <stdio.h>

void main(){

char palavra[50] = "texto";
int i = 0;
scanf("%[^\n]s", palavra);
while (palavra[i] != '\0'){
	if (palavra[i] >= 97 && palavra[i] <= 122){
		
palavra[i] = palavra[i] - 32;
}
 
i=i+1;
 
}
printf("%s\n", palavra);
 
}
