#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float delta(float a, float b, float c)
{
    float d;
    d=(b * b - 4 * a * c);

    return d;
}
int main()
{
    float a, b, c;
    int res;

    printf("\nDigite um valor para A: ");
    scanf("%f", &a);

    printf("\nDigite um valor para B: ");
    scanf("%f", &b);

    printf("\nDigite um valor para C: ");
    scanf("%f", &c);

    res=delta(a,b,c);

    printf("\nO valor de Delta eh= %.f", res);

    return 0;

}
