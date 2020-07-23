#include <stdio.h>

int main()
{
    int n, i, x, soma;

    printf("Quantos numeros serao digitadados:");
    scanf("%d",&n);

    soma = 0;
    for( i = 1;i <= n; i++) {
        printf("Digite um numero: \n");
        scanf("%d",&x);
        soma = soma + x;
    }
    printf("\n");
    printf("Soma - %.3d \n",soma);



    return 0;
}
