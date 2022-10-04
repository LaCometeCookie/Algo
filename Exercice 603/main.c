#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Saisissez un nombre\n");
    int ent1 =0;
    scanf("%d", &ent1);
    if ((ent1 %2) ==0){
        printf("Le nombre est pair\n");}
    else {
        printf("Le nombre est impair\n");}
return 0;}
