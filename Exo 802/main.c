///            ~~~~~~~~~~~~ BIBLIOTHEQUES ~~~~~~~~~~~~

#include <stdio.h>
#include <stdlib.h>
#include "Fonctions get.h" //Ces deux bibliothèques sont des bibliotheques
#include "Fonctions calcul.h" // importées d'anciens exercices
// #include "Fonctions menu"


/// ~~~~~~~~~~~~ INITIALISATION DES SOUS PROGRAMMES ~~~~~~~~~~~~

int menu();
int sommeNEntier();
int calculAddition(int nbUser, int nb2);
int calculSoustraction(int nbUser, int nb2);
int calculMultiplication(int nbUser, int nb2);


///                 ~~~~~~~~~~~~~~ MAIN ~~~~~~~~~~~~~~

int main()
{
    int a =0, nbUser =0, result =0, limite =0; /// Définition de toutes les variables

    while(limite !=5) /// Boucle globale (une boucle qui fait se recommencer le programme jusqu'à ce que 5 soit saisi)
 {                    ///J'utilise un while pour la simplicité

    printf("~~~~~ Bonjour et bienvenue dans votre calculatrice super moderne ~~~~~\n");
    printf("\nChoisissez votre nombre : "); // Affiche à l'utilisateur "Choisissez votre nombre"
    nbUser =getEntier();                    // Fonction getEntier pour faire saisir son nombre à l'user
    a =menu();                              // Fonction menu

    switch(a){        /// Switch case de 1 à 5
        case 1:{
            result =calculAddition(nbUser, 1);
            break;}
        case 2:{
            result =calculMultiplication(nbUser, 2);
            break;}
        case 3:{
            result =calculSoustraction(nbUser, 4);
            break;}
        case 4:{
            result =sommeNEntier(nbUser);
            break;}
        case 5:{
            limite =5;
            return 0;} // Le 5 retourne 0 donc arrete le programme

    }          /// Fermeture de la boucle switch
    printf("\nVotre nombre maintenant modifie est : %d\n", result); // Affichage de la valeur modifiée

  }            /// Fermeture de la boucle while du main
    printf("\n~~~~~ Fin de votre calculatrice super moderne ~~~~~\n");
    return 0;
}


