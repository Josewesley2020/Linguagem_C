#include <stdio.h>


int main()
{
    double nota1, nota2, media;

    printf("Digite a primeira nota: \n");
    scanf("%lf",&nota1);
    printf("Digite a segunda nota: \n");
    scanf("%lf", &nota2);

    media = 0;

    media = (nota1 + nota2)/ 2 ;

    if (media >= 6) {
        printf("NOTA FINAL: %.2lf", media);
    }
    else{
        printf("REPROVADO");

    }


    return 0;
}
