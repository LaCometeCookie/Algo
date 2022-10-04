#include <stdio.h>
#include <stdlib.h>
#include "Fonctions get.h"
#include "Fonctions calcul.h"

int getEntier();
int calculCarre();

int main()
{
    int result1 =0, result2 =0, a =0, b =0;
    printf("Veuillez saisir 2 nombres qui seront mis au carre :\n");
    result1 =getEntier();
    result2 =getEntier();
    a =calculCarre(result1);
    b =calculCarre(result2);
    printf("\nNombre 1 au carre donne : %d, nombre 2 au carre donne : %d\n", a , b);
    return 0;
}
