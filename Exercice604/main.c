#include <stdio.h>
#include <stdlib.h>

int main()
{
    int carac =0;
    printf("Veuillez saisir quelque chose sur votre clavier\n");
    scanf("%d", &carac);

    if ((carac >='a')&&(carac <='z'))
        {
        printf("Le caractere saisi est une lettre minuscule\n");
    }
    else if ((carac >='A')&&(carac <='Z')){
        printf("Le caractere saisi est une lettre majuscule\n");
    }
    else if ((carac >='0')&&(carac <='9')){
        printf("Le caractere saisi est un chiffre\n");
    }
    else{
        printf("Le caractere saisi est un caractere special\n");
    }
    printf("%d", carac);
return 0;
}
