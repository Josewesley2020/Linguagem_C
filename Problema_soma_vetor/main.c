#include <stdio.h>
#include <string.h>

int main()
{

   int n, i, cont;
   double soma, media;

   printf("Quantos numeros voce vai digitar? ");
   scanf ("%d",&n);

   double vet [n];

   soma = 0;
   cont = 0;
   media = 0;

   for (i = 1; i <= n; i++){
        printf("Digite um numero: ");
        scanf("%lf",&vet[i]);
        soma = soma + vet[i];
        cont = cont + 1;
   }
        media = soma/cont;

    printf ("Valores = ");
    for (i = 1; i <= n; i++){
        printf ("%.1lf ",vet [i]);
    }
    printf("\n");
    printf ("SOMA = %.1lf \n",soma);
    printf ("MEDIA = %.1lf", media);








    return 0;
}
