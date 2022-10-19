#include <stdio.h>
#include <stdlib.h>

/// ~~~~~~~~~ Initialisations ~~~~~~~~

void remplissageTableau(float tableau[10]);
void affichageTableau(float tableau[10]);
int moyenneTableau(float tableau[10]);
int ssprogrammeMixte(float tableau[10]);
int noteMin(float tableau[10]);
int noteMax(float tableau[10]);


///     ~~~~~~~~ Main ~~~~~~~~

int main()
{
    float min =0, max =0, moyenne =0; // Tous des floats comme ça pas de problèmes
    float tableau[10] ={0}; // Def du tableau de 10 cases et initialisation des cases à 0
    moyenne =ssprogrammeMixte(tableau);
    printf("\n\n~~~~~~ Calculs ~~~~~~\n\n"); // Visuel
    printf("La moyenne est : %f", moyenne);
    min =noteMin(tableau); // On recupere la valeur du programme noteMin
    max =noteMax(tableau);
    printf("\nLa note min est : %f\nLa note max est : %f\n", min, max);
    return 0; /// On aurait pu faire l'affichage dans les ss programmes mais l'énnoncé demandait de retourner les valeurs
}
