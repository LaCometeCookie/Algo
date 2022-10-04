#include <stdlib.h>
#include <stdio.h>

///---------------------------- SOUS PROGRAMMES POUR GET QUELQUE CHOSE ----------------------------\\\

int getEntier(){ //GET ENTIER (scanf)
    int entier;
    fflush(stdin);
    scanf("%d", &entier);
    return entier;}

float getFloat(){ //GET FLOTTANT
    float flottant;
    fflush(stdin);
    scanf("%f", &flottant);
    return flottant;}

char getChar(){ //GET CHARIOT
    char chariot;
    fflush(stdin);
    scanf("%c", &chariot);
    return chariot;}

