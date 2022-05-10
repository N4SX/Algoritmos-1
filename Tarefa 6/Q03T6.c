#include <stdio.h>

int main(){

    float i, base, exp, res ;

        printf("calculo exponencial\n");
        printf("expressao matematica : x^n\n");
        printf("base (x) : \n");
        scanf("%f",&base);
        printf("expoente (n) :\n");
        scanf("%f", &exp);

        res = base ;

        for(i = 0; i < (exp - 1); i++){

            res *= base ;

        }
        printf("O resultado eh = %.1f\n", res);

return 0;
}
