#include <stdio.h>
#include <string.h>

void heroiEhOThor(char* heroi)
{
    if(strcmp(heroi, "Thor") == 0)
    {
        printf("Y\n");
    }
    else
    {
        printf("N\n");
    }
}

int main()
{
    int numEntradas, forca;
    char heroi[100];
    scanf("%d", &numEntradas);

    for(int i = 0;i < numEntradas;i++)
    {
        scanf("%s", heroi);
        scanf("%d", &forca);
        
        heroiEhOThor(heroi);
    }

    return 0;
}