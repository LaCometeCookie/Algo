/// ~~~~ Code par C�me Boutevin-Allehaut ~~~~
/// Edit 07/09/22 09:51

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// PARTIE 1 : Afficher bonjour et l'ann�e

    printf("Bonjour !\n"); //On affiche le texte � l'�cran, le \n permet de revenir � la ligne

    int variable =0;
    // Merci de TOUJOURS mettre vos variable � z�ro :) �a vous �conomisera des probl�mes

    printf("Saisir l'annee en cours : ");
    scanf("%d", &variable);
    //On demande � l'utilisateur de saisir sa valeur

    printf("L'annee en cours est %d \n", variable);

    printf("L'oppose de l'annee est %d\n", (-variable));
    //Cette m�thode est plus optimis� : on print directement la valeur avec un moins
    //L'autre m�thode est en commentaire � la fin du code
    // *******


    /// PARTIE 2 : Faire la moyenne

    int note1 =0, note2 =0, note3 =0;
    float moyenne =0;

    printf("Veuillez saisir les 3 notes :\n");
    //On affiche la demande

    scanf("%d", &note1);
    scanf("%d", &note2);
    scanf("%d", &note3);
    //On r�cup�re les 3 valeurs saisies dans nos variables "note"

    moyenne =((note1 +note2 +note3) /3);

    printf("Note1 : %d  / Note2 : %d    / Note3 : %d    / Moyenne : %f", note1, note2, note3, moyenne);
    return 0;
}

// *******
/* variable = -variable;
printf("L'annee en cours est %d \n", variable);
*/
