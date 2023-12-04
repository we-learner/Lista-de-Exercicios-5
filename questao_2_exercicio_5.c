#include <stdio.h>
#include <string.h>

char* ehParOuImpar(int valor)
{
    if(valor%2 == 0)
    {
        return "PAR";
    }
    else
    {
        return "IMPAR";
    }
}

int main()
{
    int numEntradas;
    char nome1[100], nome2[100], escolha1[6], escolha2[6];
    int numEscolhido1, numEscolhido2;

    scanf("%d", &numEntradas);
    
    for(int i = 0;i < numEntradas;i++)
    {
        scanf("%s", nome1);
        scanf("%s", escolha1);
        scanf("%s", nome2);
        scanf("%s", escolha2);
        scanf("%d", &numEscolhido1);
        scanf("%d", &numEscolhido2);

        int soma = numEscolhido1 + numEscolhido2;

        if(strcmp(ehParOuImpar(soma), escolha1) == 0)
        {
            printf("%s\n", nome1);
        }
        else
        {
            printf("%s\n", nome2); 
        }
    }

    return 0;
}