#include <stdio.h>


///             ~~~~~~~~ Remplissage d'une matrice ~~~~~~~~

void saisieTableau(int lignes, int colonnes, char tableau[lignes][colonnes]){
    char car =0;
    for(int i =0; i <lignes; i++){          //Boucles for de remplissage de la matrice
        for(int u =0; u <colonnes; u++){
            printf("Veuillez saisir la ligne %d, colonne %d :\t", i+1, u+1);
            fflush(stdin);
            scanf("%c", &car); //On pourrait passer le tableau directement mais j'aime pas X)
            printf("\n"); //Evite les problèmes d'instabilité

            tableau[i][u] =car; //On donne la valeur saisie dans le scanf au tableau
        }
    }
}


/*Là faut qu'on discute parce-que sur le word des exos il est écrit "les voyelles" mais dans l'exemple
 * même les consonnes sont en majuscules donc moi je me fie à la consigne : go voyelles
 * et puis seulement les voyelles c'est plus difficile donc meilleur entrainement :) */

///             ~~~~~~~~ Passage des voyelles minuscules en majuscules ~~~~~~~~

void voyelleMajuscule(int lignes, int colonnes, char tableau[lignes][colonnes]) {
    char car;
    int decalage =32; //Un a en ascii vaut 97 et un A vaut 65 on a donc un décalage de 32 pour obtenir le bon caractère
    //Il était précisé dans l'énoncé qu'il fallait une variable décalage

    for(int i =0; i <lignes; i++) {          //Boucles for pour mettre des majuscules aux voyelles
        for (int u = 0; u < colonnes; u++) {
            car =tableau[i][u];  //Variable intermédiaire pour réduire la taille du if
            if(car =='a' || car =='e' || car =='i' || car =='o' || car =='u' || car =='y'){ //Test de voyelle
                tableau[i][u] =tableau[i][u] -decalage; //On transforme la minuscule en maj
            }
        }
    }
}


///             ~~~~~~~~ Affichage de la matrice ~~~~~~~~

void affichageMatrice(int lignes, int colonnes, char tableau[lignes][colonnes]){
    for(int i =0; i <lignes; i++){          //Boucles for pour l'affichage de la matrice après saisie
        for(int u =0; u <colonnes; u++){
            printf("%c ", tableau[i][u]);}
        printf("\n");}
}


///             ~~~~~~~~ Inversion de la matrice ~~~~~~~~

void inversionMatrice(int lignes, int colonnes, char tableau[lignes][colonnes]){

    char tabTampon[lignes][colonnes]; //Ce tableau va stocker la matrice pendant qu'elle est modifiée

    for(int i =0; i <lignes; i++) {          //Boucles for pour copier la matrice d'origine à la tampon
        for (int u = 0; u < colonnes; u++) {
            tabTampon[i][u] =tableau[i][u];
        }
    }

    ///Variables d'indentation inversée pour parcourir la matrice dans le sens inverse des boucles for
    ///En gros quand le i et u augmentent avec les for celle là vont diminuer.
    int a =(lignes -1), b; //Pourquoi lignes -1 ? Et bien un tableau de 5 (tab[5]) ira en réalité de 0 à 4 !

    for(int i =0; i <lignes; i++) {          //Boucles for pour inverser la matrice d'origine en fonction de la tampon
        b =(colonnes -1); //Reset des colonnes

        for (int u = 0; u < colonnes; u++) {
            tableau[a][b] = tabTampon[i][u];
            b --; //Indentation inverse
        }
        a--;
    }
    /*Normalement à la fin de ce sous programme la matrice d'origine est inversée
     * et la matrice "tabTampon" est identique à "tableau" avant le démarrage de ce sous-programme"
     *
     * D'ailleurs cette matrice "tabTampon" sera détruite à la fin du sous-programme car créée dans celui ci
     * alors que "tableau" est un pointeur passé en paramètre donc toujours accessible depuis le main !*/
}