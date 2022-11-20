#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaineMot[100];
    char chainePhrase[100];
    int i = 0, compteurLongueur = 0, compteurMots = 0;
    printf("saisir un mot\n");
    fflush(stdin);
    gets(chaineMot);
    fflush(stdin);
    printf("saisir une phrase courte\n");
    fgets(chainePhrase, 100, stdin);

    for (i = 0; chaineMot[i] != '\0'; i++)
    {
        compteurLongueur++;
    }

    for (i = 0; chainePhrase[i] != '\0'; i++)
    {
        if (((chainePhrase[i] >= 'a') && (chainePhrase[i] <= 'z')) || ((chainePhrase[i] >= 'A') && (chainePhrase[i] <= 'Z')))
        {
            compteurMots++;
            printf("%d\n", compteurMots);
        }
    }
    printf("longueur mot : %d\n", compteurLongueur);
    printf("longueur phrase : %d\n", compteurMots);

    return 0;
}
