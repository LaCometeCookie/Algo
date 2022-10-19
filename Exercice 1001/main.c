#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tableau[13] ={0}; //Definition du tableau de 13 cases et initialisation à 0 de toutes les cases
    char carac =0;

    printf("Veuillez saisir treize caracteres :\n"); // Boucle de saisie des caractères
    for (int i =0; i <13; i++){
        fflush(stdin);
        scanf("%c", &carac);
        tableau[i] =carac; /// Je l'ai fait en 2 lignes pour la lisibilité mais possible en une seule : scanf("%c", tableau[i]);
    }

    printf("Les caracteres sont : "); // Boucle d'affichage
    for (int j =0; j <13; j++){

        printf("%c ", tableau[j]);
    }
    return 0;
}
