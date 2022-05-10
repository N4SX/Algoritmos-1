 #include <stdio.h>

void main(){
	
    int idade, opi, i, regular=0, bom=0, excelente=0, contador=0;
    int soma_idade1=0,soma_idade2=0,soma_idade3=0;
	float per;
	float media_idade;    
    for(i=1;i<=10;i++){
    	
        printf("Digite idade: ");
        scanf("%d",&idade);
        printf("digite sua opiniao excelente (3), bom (2), e regular (1).\n");
        scanf("%d",&opi);
       
        switch(opi){
            case 1 :
                regular=regular+1;
                soma_idade1 = soma_idade1 + idade;
                
            break;
            case 2 :
                bom=bom+1;
                soma_idade2=soma_idade2+idade;
            break;
            case 3:
                excelente=excelente+1;
                soma_idade3=soma_idade3+idade;
            break;
        }
    }
     printf("porcentagem de pessoas que escolheram regular%.2f\n", per = ( regular * 100 )/ 10 );
     printf("porcentagem de pessoas que escolheram bom%.2f\n",per=(bom*100)/20);
     printf("porcentagem de pessoas que escolheram excelente%.2f\n",per=(excelente*100)/30);
     printf("a media das idades e%.2f\n",media_idade=(soma_idade1/regular));
     printf("a media das idades e %.2f\n",media_idade=(soma_idade2/bom));
     printf("a media das idades e %.2f\n",media_idade=(soma_idade3/excelente));
     
}

