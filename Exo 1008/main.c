#include <stdio.h>

#define COLONNES 5
#define LIGNES 4

void saisieTableau(int lignes, int colonnes, char tableau[lignes][colonnes]);
void voyelleMajuscule(int lignes, int colonnes, char tableau[lignes][colonnes]);
void inversionMatrice(int lignes, int colonnes, char tableau[lignes][colonnes]);

void affichageMatrice(int lignes, int colonnes, char tableau[lignes][colonnes]); //Pas obligatoire mais j'optimise



int main() {
    printf("\n\t~~~~~~~~ Debut ~~~~~~~~\n\n");
    char tableau[LIGNES][COLONNES];

    saisieTableau(LIGNES, COLONNES, tableau);   //Saisie de la matrice
    printf("Matrice saisie :\n");
    affichageMatrice(LIGNES, COLONNES, tableau);//Affichage 1

    voyelleMajuscule(LIGNES, COLONNES, tableau);//Modification -> majuscule aux voyelles
    printf("\nVoyelles en majuscule :\n");
    affichageMatrice(LIGNES, COLONNES, tableau);//Affichage 2

    inversionMatrice(LIGNES, COLONNES, tableau);//Modification -> inversion
    printf("\nInversion :\n");
    affichageMatrice(LIGNES, COLONNES, tableau);//Affichage 3

    printf("\n\n\t~~~~~~~~ Fin ~~~~~~~~\n\n");
    return 0;
}


/// Exo 1008
/// ~~~~ Code par Côme Boutevin-Allehaut ~~~~
/// Edit 18/10/2022 18:08