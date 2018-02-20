#include <stdio.h>

    int soma (int a, int b)
    {
        int c;
        c= a + b;
        return c;
    }

    int main ()

{
    int d, e, f;

    printf("Digite um numero:\n");
    scanf("%d",&d);
    printf("Digite um numero:\n");
    scanf("%d",&e);
    f= soma(d, e);

    printf("Resultado: %d\n", f);

}
