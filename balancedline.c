//Aluno: Bruno Legentil de Matos
//Matrícula: 0050015204
#include <stdio.h> <string.h>

int main()
{
FILE *arq1=fopen("arq1.txt", "r");
FILE *arq2=fopen("arq2.txt", "r");

FILE *arq3=fopen("arq3.txt", "w");

char linha[100];
char linha2[100];

fgets(linha, sizeof(linha),arq1);
fgets(linha, sizeof(linha),arq1);
fgets(linha2, sizeof(linha2),arq2);
fgets(linha2, sizeof(linha2),arq2);

while(!feof(arq1) && !feof(arq2))
{
    fgets(linha, sizeof(linha),arq1);
    fgets(linha2, sizeof(linha2),arq2);

    if(strcmp(linha, linha2) ==-1)
    {
        fprintf(arq3, "%s\n", linha);
        fprintf(arq3, "%s\n", linha2);
    }
}

while(!feof(arq2))
{
    fgets(linha2, sizeof(linha2),arq2);
    fprintf(arq3, "%s\n", linha2);
}

fclose(arq1);
fclose(arq2);
fclose(arq3);

return 0;
}


