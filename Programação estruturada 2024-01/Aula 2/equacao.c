#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float delta, x1, x2;

    printf("Digite o coeficiente 'a' da equacao: ");
    scanf("%f", &a);

    printf("Digite o coeficiente 'b' da equacao: ");
    scanf("%f", &b);

    printf("Digite o coeficiente 'c' da equacao: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if (delta < 0)
    {
        printf("Nenhuma raiz real\n");
    }
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        printf("Uma raiz: %f\n", x1);
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Duas raizes: %f e %f\n", x1, x2);
    }

    return 0;
}
