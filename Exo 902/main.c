#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val1 =0; unsigned char val2 =4; char lettre =0;
    int *pt1 =&val1, *pt2 =&val2, *pt3 =&lettre;
    int **ppt1 =&pt1, **ppt2 =&pt2, **ppt3 =&pt3;


///         ~~~~~~~~~~ Affectation directe ~~~~~~~~~~

    printf("Veuillez choisir 3 entiers entre 0 et 124 svp merci\n");
    scanf("%d", &val1);
    fflush(stdin);
    scanf("%c", &val2);
    fflush(stdin);
    scanf("%c", &lettre);
    printf("\n~~~~ Vos 3 valeurs sont : %d %c %c ~~~~\n", val1, val2, lettre);


///         ~~~~~~~~~~ Affectation indirecte ~~~~~~~~~~

    printf("\nVeuillez choisir 3 entiers entre 0 et 124 POUR MODIFIER LES PRECEDENTES\n");
    scanf("%d", pt1);
    fflush(stdin);
    scanf("%c", pt2);
    fflush(stdin);
    scanf("%c", pt3);
    printf("\n~~~~ Vos 3 valeurs sont : %d %c %c ~~~~\n", val1, val2, lettre);


///         ~~~~~~~~~~ Affectation in-indirecte ~~~~~~~~~~

    printf("\nVeuillez choisir 3 entiers entre 0 et 124 POUR MODIFIER LES PRECEDENTES\n");
    scanf("%d", *ppt1);
    fflush(stdin);
    scanf("%c", *ppt2);
    fflush(stdin);
    scanf("%c", *ppt3);
    printf("\n~~~~ Vos 3 valeurs sont : %d %c %c ~~~~\n", val1, val2, lettre);

    return 0;
}
