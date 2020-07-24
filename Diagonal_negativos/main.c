#include <stdio.h>

int main()
{
    int n, i, j, Qnegativos;

    printf("Qual a ordem da matriz? ");
    scanf("%d",&n);

    int mat[n][n];

    Qnegativos = 0;

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%d",&mat[i][j]);
            if (mat[i][j] < 0){
                Qnegativos = Qnegativos + 1;
            }
            }
        }
    printf("DIAGONAL PRINCIPAL: \n");
    for (i = 0; i < n; i++){
        printf("%d ", mat[i][i]);
    }
    printf("\n");

    printf("QUANTIDADE DE NEGATIVOS = %d ", Qnegativos);


    return 0;
}

