#include <stdio.h>
#include <stdlib.h>

int menu(){ // Affiche le menu et retourne le menu choisi
    int choixMenu =2;
    printf("\n~~~~~ Veuillez choisir l'operation a effectuer ~~~~~\n\n");
    printf("1. Ajouter 1\n");
    printf("2. Multiplier par 2\n"); /// Tout ce qui est en bleu n'est que du texte
    printf("3. Soustraire 4\n");
    printf("4. Somme des n premiers entiers\n");
    printf("5. Quitter\n");

    while (choixMenu <1 || choixMenu >4);{ /// Boucle de blindage
        fflush(stdin);
        printf("\nN'oubliez pas de choisir une operation valide\n");
        scanf("%d", &choixMenu);}
    return choixMenu;
}

int sommeNEntier(int nbUser){ // Somme des n entiers de 0 à nbUser
    int a =0;
    for (int i =0; i<nbUser; i++){
        a = a +i;
    }
    a = a +nbUser;
    return a;
}

int calculMultiplication(int nbUser, int nb2){ // Multiplication des deux var
    return (nbUser *nb2);}

int calculAddition(int nbUser, int nb2){ // Addition des deux var
    return (nbUser +nb2);}

int calculSoustraction(int nbUser, int nb2){ // Soustraction des deux var
return (nbUser -nb2);}

/// A noter que j'utilise les mêmes variables pour toutes les fonctions mais que cela ne change absolument rien
