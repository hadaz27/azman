#include<stdio.h>

int main(){
    int nb;
    printf("Entrez un nombre :\n");scanf("%d",&nb);
    if ( nb < 0)
        printf("Votre nombre est négatif\n");
    else if ( nb > 0)
        printf("Votre nombre est positif\n");
    else{
        printf("Votre nombre est égal à 0\n");
    }
}
//Écrivez un programme pour vérifier si le nombre donné est positif, négatif ou nul. 
//Si le nombre est inférieur à zéro, alors le nombre est négatif et si le nombre est supérieur à zéro, alors le nombre est positif.
//Si les deux conditions sont fausses, le nombre est égal à zéro.