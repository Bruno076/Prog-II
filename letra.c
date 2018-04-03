#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char frase[50];
   int t, i, cont=0;

   printf ("Digite uma frase: ");
   gets (frase);

   t = strlen(frase);

for(i=0;i<t;i++){
    if(frase[i]!=' ')
{
    cont++;
}}

   printf("\nTotal de letras da Frase : %d", cont);

   printf("\n\n");

   return 0;
}
