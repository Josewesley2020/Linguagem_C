<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

int main()
{
    double base, altura, area, perimetro, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &base);

    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base,2.0) + pow(altura,2.0));
    printf ("AREA = %.4lf\n",area);
    printf("PERIMETRO = %.4lf\n", perimetro);
    printf("DIAGONAL = %.4lf\n", diagonal);





    return 0;
}
=======
#include <stdio.h>
#include <math.h>

int main()
{
    double base, altura, area, perimetro, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &base);

    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base,2.0) + pow(altura,2.0));
    printf ("AREA = %.4lf\n",area);
    printf("PERIMETRO = %.4lf\n", perimetro);
    printf("DIAGONAL = %.4lf\n", diagonal);





    return 0;
}
>>>>>>> 2f1b7d96dff890794d8f06da0b95f93764ea4542
