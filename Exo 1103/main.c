#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE 50

void saisieChaine(char chaine[TAILLE])
{
    printf("saisir une chaine de caracteres\n");
    fflush(stdin);
    fgets(chaine, TAILLE, stdin);
}

void compterNombre(int *nbr1, int *nbr2)
{
    int i = 0;
    char ch[TAILLE];
    saisieChaine(ch);

    for (i = 0; i < TAILLE && i != '\0'; i++)
    {
        if ((ch[i] >= '0') && (ch[i] <= '9'))
        {
            ((*nbr1)++); //mettre nbr1 entre () ?
        }
        else if ((ch[i] >= 'a') && (ch[i] <= 'z'))
        {
            ((*nbr2)++); //mettre nbr2 entre () ?
        }
    }
}

int main()
{
    int cmp1 = 0, cmp2 = 0;
    compterNombre(&cmp1, &cmp2);
    printf("nb de chiffres : %d\n", cmp1);
    printf("nb de lettres : %d\n", cmp2);
    return 0;
}
