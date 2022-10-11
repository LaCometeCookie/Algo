/* code par Côme Boutevin-Allehaut
 * edit 11/10/2022 20:05
 * Exo 704 */

///Important : une itération est un tour de boucle donc un for avec 7 iterations tournera 7 fois

#include <stdio.h>

int main() {
    int boucle =0, v2 =0;   char choix; //variables pour les while et pour le choix
    int note = 0, iteration = 0;
    float moyenne = 0;

    printf("\n~~ Bienvenue dans votre programme de calcul de moyenne ! ~~\n\n");

  while(v2 ==0){            //Partie 2 de l'exercice
    while (boucle == 0) {
        printf("Saisir note :");
        fflush(stdin);
        scanf("%d", &note);

        if (note >= 0) {       //On vérifie si la note est positive si oui on l'ajoute à moyenne
            moyenne += note; //Equivaut à moyenne = moyenne + note
            iteration++;
        } else {               //Des qu'une note negative est saisie on divise la moyenne par le nombre d'iterations
            boucle = 1;
            moyenne = (moyenne / iteration);
        }
    }

    printf("La moyenne des %d notes est : %f", iteration, moyenne);
    boucle =0; iteration =0;   //On reset les variables pour un nouveau tour de boucle

    printf("\n\nVoulez vous recommencer ? (o =oui / n =non): ");
    fflush(stdin);
    scanf("%c", &choix);

    if(choix == 'n'){     //On vérifie seulement si le choix est non sinon ça se relance tout seul
        printf("\nAu revoir !\n\n");
        v2 =1;}
  }
    return 0;
}
