#include <stdio.h>
#include <stdlib.h>

int main ()  {

    int n, i;

    printf("Quantos numeros serão digitados? ");
    scanf("%d", &n);

    double vet [n];

    for (i=0; i < n; i++) {
        printf("Digite um numero: ");
        scanf ("%lf", &vet[i]);
    }

    printf("\n Numeros digitados: \n");
    for (i = 0; i < n; i++){
        printf ("%.1lf \n", vet[i]);
    }

    return 0;
}
