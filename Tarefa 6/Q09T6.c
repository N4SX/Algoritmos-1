#include <stdio.h>

int main(){
	
    int i,per=0;
    float x1,x2,x3,media,media_turma=0.0;
    
    for(i=1;i<=20;i++){
    	
        printf("digite tres notas\n");
        scanf("%f%f%f",&x1,&x2,&x3);
        media=(x1+x2+x3)/3;
        media_turma+=media;
        printf("media aluno%d:%.2f\n\n",i,media);
        if(media>7){
        	
            per++;
        }
    }
	printf("media da turma:%.2f\n",media_turma/20);
	printf("percentual de alunos que tiveram media acima de 7,0:%d",(per*100)/20);

    return 0;
}

