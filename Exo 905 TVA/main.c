#include <stdio.h>
#include <stdlib.h>

int calculTaxe(int *identifiant, float *prixHorsTaxe, float *taxe); /// Initialisation du sous programme

int main()
{
    int ident =0; float prixHT =0, taxe =0, prixTTC =0;
    prixTTC =calculTaxe(&ident, &prixHT, &taxe);
    printf("\n~~~~~~ Fin du programme, retour des valeurs ~~~~~~\n");
    printf("\nL'identifiant du produit est : %d\nSon prix hors taxe est : %f\nSon prix avec la taxe est : %f\nLa taxe appliquee est : %f\n", ident, prixHT, prixTTC, taxe);
    return 0;
}

int calculTaxe(int *identifiant, float *prixHorsTaxe, float *taxe){
    float prixTaxe =0;
///                         DEMANDE ET SAISIE DES DONNEES
    printf("~~~~~~ Debut du programme de calcul de la TVA ~~~~~~\n\n");
    printf("Veuillez rentrer l'identifiant de l'article : ");
    scanf("%d", identifiant);
    fflush(stdin);
    printf("\nVeuillez rentrer le prix hors taxes de l'article : ");
    scanf("%f", prixHorsTaxe);
    fflush(stdin);
    printf("\nVeuillez rentrer la taxe a appliquer sur l'article en pourcentage : ");
    scanf("%f", taxe);

    prixTaxe = *prixHorsTaxe +(*prixHorsTaxe *(*taxe /100)); // Calcul de pourcentage
    return prixTaxe; // Return prix modifié
}
