#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int menu();
int aireRectangle(int largeur, int longueur, float *ptPerim);
int aireTriangle(int largeur, int longueur, float *ptPerim);
int aireCercle(int rayon, float *ptPerim);

int main()
{
    char a =0; float result =0, perimetre =0; int rayon =0, largeur =0, longueur =0, limite =0;

    while(limite !=5) /// Boucle globale (une boucle qui fait se recommencer le programme jusqu'à ce que 5 soit saisi)
 {                    ///J'utilise un while pour la simplicité

    printf("~~~~~ Bonjour et bienvenue dans votre calculatrice d'aire super moderne ~~~~~\n");
    a =menu();                              // Fonction menu

    switch(a){        /// Switch case de 1 à 5
        case 'r':
            printf("\nVeuillez saisir la longueur et la largeur de votre rectangle : \n");
            fflush(stdin);
            scanf("%d", &longueur);
            fflush(stdin);
            scanf("%d", &largeur);

            result =aireRectangle(largeur, longueur, &perimetre);
            break;
        case 't':{
            printf("\nVeuillez saisir les deux plus petits cotes du triangle rectangle : \n");
            fflush(stdin);
            scanf("%d", &longueur);
            fflush(stdin);
            scanf("%d", &largeur);

            result =aireTriangle(largeur, longueur, &perimetre);
            break;}
        case 'c':{
            printf("\nVeuillez saisir le rayon de votre cercle : \n");
            fflush(stdin);
            scanf("%d", &rayon);

            result =aireCercle(rayon, &perimetre);
            break;}
        case 'f':{
            limite =5;
            return 0;} // Le 5 retourne 0 donc arrete le programme

    }          /// Fermeture de la boucle switch
    printf("\nL'aire est : %f\nLe permimetre est : %f\n\n\n", result, perimetre); // Affichage de la valeur modifiée

  }            /// Fermeture de la boucle while
    printf("\n~~~~~ Fin de votre calcul d'aire ~~~~~\n");
    return 0;
}

int menu(){ // Affiche le menu et retourne le menu choisi
    char choixMenu ='a';
    printf("\n~~~~~ Veuillez choisir l'aire a calculer ~~~~~\n\n");
    printf("'r'. Rectange\n");
    printf("'t'. Triangle rectangle\n");
    printf("'c'. Cercle\n");
    printf("'f'. Fin du programme\n");

    while ((choixMenu != 'r')&&(choixMenu != 't')&&(choixMenu != 'c')&&(choixMenu != 'f')){ /// Boucle de blindage
        fflush(stdin);
        printf("\nN'oubliez pas de choisir une operation valide\n");
        scanf("%c", &choixMenu);}
    return choixMenu;
}

int aireRectangle(int largeur, int longueur, float *ptPerim){
    *ptPerim =((longueur+largeur) *2);
    return (largeur *longueur);
}

int aireTriangle(int largeur, int longueur, float *ptPerim){
    *ptPerim = (largeur + longueur + (sqrt((largeur *largeur)+(longueur*longueur))));
    return ((largeur *longueur)/2);
}

int aireCercle(int rayon, float *ptPerim){
    float pi =(3.14);
    *ptPerim = (2*(pi * rayon));
    return (pi *(rayon * rayon));
}
