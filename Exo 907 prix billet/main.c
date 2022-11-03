#include <stdio.h>
#include <stdlib.h>

///                        ~~~~~~~~ Initialisation ~~~~~~~~
void billetEnfant(float *prix);
void billetAdo(float *prix);
void billetEtudiant(float *prix);
void billetAdulte(float *prix);

///                             ~~~~~~~~ Main ~~~~~~~~
int main()
{
    float billet =50; int age =200;
    printf("~~~~~~ Bienvenue dans votre programme de calcul du prix du billet ~~~~~~\n");

    while (age <0 || age >150){                 /// BLINDAGE AGE
    printf("\nVeuillez entrer l'age du client : ");
    fflush(stdin);
    scanf("%d", &age);}

    if (age >=0 && age <5){    /// Boucle if de test de l'age saisi
        billetEnfant(&billet);
    }
    else if (age >=5 && age <=17){
        billetAdo(&billet);
    }
    else if (age >17 && age <=29){
        billetEtudiant(&billet);
    }
    else if (age >29 && age <=60){
        billetAdulte(&billet);
    }
    else {
        printf("\nAucun ticket n'est rendu pour les seniors\n");
        return 0;
    }

    printf("Le prix a payer est : %f\n", billet);
    return 0;
}

///                             ~~~~~~~~ Sous-Programmes ~~~~~~~~
void billetEnfant(float *prix){
    *prix = (*prix *0);
    }

void billetAdo(float *prix){
    *prix =(*prix -((*prix *75)/100));
    }

void billetEtudiant(float *prix){
    *prix =(*prix *0.50);
    }

void billetAdulte(float *prix){
    *prix = *prix;
    }
