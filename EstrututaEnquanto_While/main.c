#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int soma, x;

    printf("Digite o primeiro numero:");
    scanf("%d", &x);

    while(x != 0 ) {
        soma = soma + x;
        printf("Digite outro numero: \n");
        scanf("%d",&x);
    }

    printf("SOMA - %.5d\n",soma);

    return 0;
}
