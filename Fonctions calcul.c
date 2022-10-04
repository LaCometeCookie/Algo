#include <stdio.h>
#include <stdlib.h>

///---------------------------- SOUS PROGRAMMES DE CALCUL ----------------------------\\\

int lePlusGrand(int nombre1, int nombre2){ //Le plus grand de 2 entiers
    if (nombre1 >nombre2)
    {
        printf("nombre1 est superieur a nombre2\n");
        return nombre1;
    }
    else if (nombre1 <nombre2)
    {
        printf("nombre2 est superieur a nombre1\n");
        return nombre2;
    }
    else
    {
        printf("Les deux nombres sont égaux\n");
        return 0;
    }
}

int calculDuMultiple(int nbr1){ //Le plus petit multiple d'un nombre
    int n=2;
    int resultat=1;
    while (resultat!=0) {
        resultat =(nbr1%n);
        n++;}
    n--;
    return n;}

int calculAire(int longueur, int largeur){ //Calcul de l'aire
    return (longueur *largeur);}

int calculPerimetre(int longueur, int largeur){ //Calcul du perimetre
    return (longueur + largeur)*2;}

int calculCarre(int nombre1){ //Calcul du carré d'un nombre
    return (nombre1 * nombre1);
}

