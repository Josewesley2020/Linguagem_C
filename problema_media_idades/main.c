#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int idade, soma, n;
    double idadeMedia;

    printf("Digite as idades: \n");
    scanf("%d", &idade);

    n = 0;
    soma = 0;

    while ( idade >= 0 ) {
            soma = soma + idade;
            n = n + 1;
            scanf("%d", &idade);
    }
    printf("\n");
    if (n == 0) {
        printf("IMPOSSIVEL CALCULAR");
    }
    else {
    idadeMedia = (double)soma / n;
    printf("MEDIA = %.2lf\n",idadeMedia);
    }
    return 0;
}
