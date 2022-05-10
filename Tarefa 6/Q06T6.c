#include <stdio.h>

    void main(){
    	
    int qntF = 0, qntM = 0, sex;
    float MF = 0.0, MM = 0.0;

    do{
        printf("informe o sexo [1-feminino//2-masculino//0-sair]\n");
        scanf(" %d", &sex); 

        switch(sex){
            case 1: qntF++; 
                    MF+=sex;
                    break;
            case 2: qntM++;
                    MM+=sex;
                    break;
        }
    }while(sex!=0);
    
    printf("\n media feminino: %.2f", MF/(float)qntF);
    printf("\n media masculino: %.2f", MM/(float)qntM);

}


