/// ~~~~ Code par Côme Boutevin-Allehaut ~~~~
/// Edit 07/09/22 09:51

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ent1 =0, ent1tampon =0; //On definit deux entiers

    printf("Veuillez saisir un entier :\n"); //On demande à l'utilisateur de saisir un entier
    scanf("%d", &ent1); //On saisi la valeur de l'entier 1

    ent1tampon =ent1; //On met sa valeur en tampon
    ent1 = ent1 * ent1; //On passe l'entier 1 au carré

    printf("Votre entier est %d et son carre est %d\n", ent1tampon, ent1); //Puis on affiche les deux valeurs
    return 0;
}
