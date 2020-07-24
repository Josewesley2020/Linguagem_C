#include <stdio.h>
#include <string.h>

int main()
{
    int n,i, menor16;
    double somaAltura;
    printf ("Quantas pessoas serao digitadas? ");
    scanf("%d",&n);

    char nomes [n] [50];
    int idades [n];
    double alturas [n];

    menor16 = 0;
    somaAltura = 0;

    for (i = 0; i < n; i++){
        printf("Dados da %da pessoa \n",i + 1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets (nomes [i]);
        printf("Idade: ");
        scanf("%d",&idades [i]);
        if (idades[i] < 16 ){
            menor16 = menor16 + 1;
        }
        printf("Altura: ");
        scanf("%lf",&alturas[i]);
        somaAltura = somaAltura + alturas[i];
    }

   double mediaAltura, porcento16;

   mediaAltura = somaAltura / n;
   porcento16 = menor16 * 100 / n;
    printf("\n");
   printf("Altura media: %.2lf\n",mediaAltura);
   printf("Pessoas com menos de 16 anos: %.1lf % \n",porcento16);

   for ( i = 0; i < n; i++) {
    if (idades[i] < 16){
        printf(nomes[i]);
        printf("\n");
    }
   }

    return 0;
}
