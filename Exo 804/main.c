#include <stdio.h>
#include <stdlib.h>

int ssp1(int x1, int x2);

int main()
{
    int val1 =0, val2 =0;
    printf("Veuillez saisir deux entiers :\n");
    fflush(stdin);
    scanf("%d", &val1);
    fflush(stdin);
    scanf("%d", &val2);

    printf("\nVous venez de dire que val1 =%d et que val2 =%d\n", val1, val2);
    ssp1(val1, val2);
    printf("\nTada les valeurs sont identiques val1 =%d, val2 =%d\n", val1, val2);

    return 0;
}

int ssp1(int x1, int x2){
    printf("\nLes parametres recu sont x1: %d, x2: %d\n", x1, x2);
    x1 = x1 +10;
    printf("\nLes entiers apres modif sont x1: %d, x2: %d\nPS: Le probleme est qu'il manque un return\n", x1, x2);
}
