#include <stdio.h>
#include <stdlib.h>

void remplissageTableau(float tableau[10]){
    float note =30;
    printf("~~~~~~ Remplissage du tableau ~~~~~~\n\n");

    for (int i =0; i <10; i++){
        note =30;
        while ((note <0)||(note >20)){
            printf("Veuillez saisir une note comprise entre 0 et 20 :\n");
            fflush(stdin);
            scanf("%f", &note);
            }
        tableau[i] =note;
    }
}

void affichageTableau(float tableau[10]){
    printf("\n\n~~~~~~ Affichage du tableau ~~~~~~\n\n");
    printf("Les notes sont :\n");
    for (int i =0; i<10; i++){
        printf("%f\n", tableau[i]);

    }

}

int moyenneTableau(float tableau[10]){
    float result =0;
    for (int i =0; i <10; i++){
        result = result +tableau[i];
    }
    return (result/10);
}

int ssprogrammeMixte(float tableau[10]){
    int sortie =0;
    remplissageTableau(tableau); /// Remplissage
    affichageTableau(tableau);   /// Affichage

    sortie =moyenneTableau(tableau); /// J'ai triché mais autant tout découper c'est plus lisible
    return sortie;
}

int noteMin(float tableau[10]){
    float min = tableau[0];
    for (int i =1; i <10; i++){ //On met i à 1 pour ne pas comparer la valeur en 0 avec elle même
        if (min > tableau[i]){
            min = tableau[i];}
    }
    return min;
}

int noteMax(float tableau[10]){
    float max =0;
    for (int i =1; i <10; i++){ //On met i à 1 pour ne pas comparer la valeur en 0 avec elle même
        if (max < tableau[i]){
            max = tableau[i];}
    }
    return max;
}
