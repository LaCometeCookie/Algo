#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE 50

int main()
{
    fflush(stdin);
    char verbe[TAILLE];
    char verbeConjugue[TAILLE];
    char terminaison[6][6] = {"e", "es", "e", "ons", "ez", "ent"};
    char pronoms[6][6] = {"je", "tu", "iel", "nous", "vous", "iels"};
    int i = 0, j = 0;

    printf("saisir le verbe a tester\n\n");
    scanf("%s", verbe);
    printf("\n");

    i = strlen(verbe);

    if ((verbe[i - 2] != 'e') || (verbe[i - 1] != 'r'))
    {
        printf("le verbe %s ne fait pas partie du premier groupe\n\n", verbe);
    }
    /// RAJOUTER EN BLINDAGE UNE CONJUGAISON SPECIALE POUR LE VERBE ALLER
    ///si voyelle alors j'
    else
    {
        verbe[i - 2] = '\0';
        strcat(verbeConjugue, verbe);
        for (j = 0; j < 6; j++)
        {
            printf("%s %s%s\n", pronoms[j], verbeConjugue, terminaison[j]);
        }
    }

    return 0;
}
