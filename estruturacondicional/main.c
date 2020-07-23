#include <stdio.h>
#include <string.h>

int main()
{
    int hora;

    printf("Digite uma hora do dia: \n");
    scanf("%d",&hora);
    printf("\n");

    if (hora <= 12) {
        printf("Bom dia \n");
    }
    else if (hora < 18 ) {
        printf("Boa tarde \n");
    }
    else{
        printf("Boa Noite \n");
    }

    return 0;
}
