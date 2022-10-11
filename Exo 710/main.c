/* code par Côme Boutevin-Allehaut featuring Mathis
 * edit 11/10/2022 21:35
 * Exo 710 */

#include <stdio.h>

/// CARRE ///
void carre(int hauteur){

    int x ;
    int y ;
    for (x = 0; x < hauteur; ++x) {
        for (y = 0; y < hauteur; ++y) {
            printf("*");
        }
        printf("\n");
    }
}

/// TRIANGLE ///
void triangle(int hauteur){

    int x;
    int y; //VARIABLES DE BOUCLE//
    int z;

    int largmax = (hauteur - 1) * 2 + 1;        // LARGEUR MAX DE LA PYARMIDE SUIT LA REGLE : (Hauteur - 1) * 2 //
    int vide = (largmax - 1) / 2;               // VIDE PREMIER ETAGE SUIT LA REGLE : (Largeurmax - 1) / 2 //
    int etoile = 1;

    for (y = 0; y < hauteur; ++y){
        for (z = 0; z < vide; ++z){        // AFFICHAGE ESPACE //
            printf(" ");
        }
        for (x = 0; x < etoile; x++){   // AFFICHGE ETOILE//

            printf("*");
        }
        for (z = 0; z < vide; ++z){                // AFFICHAGE ESPACE //
            printf(" ");
        }
        printf("\n");                           // RETOUR LIGNE //
        vide -= 1;                                    // DIMINUTION DE L'ESPACE //
        etoile += 2;                    //AUGMENTATION DES ETOILES //
    }
}


///SABLIER///
void sablier(int hauteur){

    int x;
    int y;   //VARIABLES DE BOUCLE//
    int z;

    int largmax = (hauteur - 1) * 2 + 1;            // LARGEUR MAX DE LA PYRAMIDE SUIT LA REGLE : (Hauteur - 1) * 2 //
    int vide = 0 ;                                  // VIDE PREMIER ETAGE SUIT LA REGLE : (Largeurmax - 1) / 2 //

    int etoile = largmax;

    for (y = 0; y < hauteur; ++y){
        for (z = 0; z < vide; ++z){            // AFFICHAGE ESPACE //
            printf(" ");
        }
        for (x = 0; x < etoile; x++){          // AFFICHAGE ETOILE//
            printf("*");
        }
        for (z = 0; z < vide; ++z){            // AFFICHAGE ESPACE //
            printf(" ");
        }
        printf("\n");                           // RETOUR LIGNE //
        vide +=1;                              // DIMINUTION DE L'ESPACE //
        etoile -=2;                    //AUGMENTATION DES ETOILES //
    }

    largmax = (hauteur - 1) * 2 + 1;
    vide = (largmax - 1) / 2;
    etoile = 1;

    for (y = 0; y < hauteur; ++y){
        for (z = 0; z < vide; ++z){        // AFFICHAGE ESPACE //
            printf(" ");
        }
        for (x = 0; x < etoile; x++){        // AFFICHGE ETOILE/
            printf("*");
        }
        for (z = 0; z < vide; ++z){        // AFFICHAGE ESPACE //
            printf(" ");
        }
        printf("\n");
        vide -= 1;
        etoile = etoile + 2;
    }

}



int main() {
    printf("\n~~ Bienvenue dans l'exo 710 pour tracer des figures ~~\n\n");

    int h = -1;
    int var = 0;

    while ((var < 1) || (var > 3)) {   //Boucle while de blindage
        printf("Quelle figure voulez vous afficher ?  (1 =carre / 2 =pyramide / 3 =sablier) :\n");
        fflush(stdin);      //Ligne permettant de vider le buffer
        scanf("%d", &var);
    }

    while(h <0){                        //Blindage
        printf("Hauteur de votre figure : \n");
        fflush(stdin);
        scanf("%d", &h);
    }

    if (var == 1){
        carre(h);}
    else if (var == 2){
        triangle(h);}
    else if (var == 3){
        sablier(h);}
    else{
        printf("\nMauvais choix\n");}

    return 0;
}
