#include<stdio.h>

int main(){
    float moyenne;
    printf("Entrez votre moyenne\n");scanf("%f",&moyenne);
    if (moyenne < 10)
        printf("T'es recalé\n");
    else if(moyenne >= 10 && moyenne < 12)
        printf("T'as la mention passable\n");
    else if(moyenne >= 12 && moyenne < 14)
        printf("T'as obtenu la mention assez bien\n");
    else if (moyenne >= 14 && moyenne < 16)
        printf("Vous avez obtenue la mention bien\n");
    else
        printf("Vous avez obtenu la mention très bien\n");
}
/*Nous désirons afficher la mention obtenue par un élève en fonction de la moyenne de ses notes.
S’il a une moyenne strictement inférieure à 10, il est recalé.
S’il a une moyenne entre 10 (inclus) et 12, il obtient la mention passable.
S’il a une moyenne entre 12 (inclus) et 14, il obtient la mention assez bien.
S’il a une moyenne entre 14 (inclus) et 16, il obtient la mention bien.
S’il a une moyenne supérieure à 16 (inclus) il obtient la mention très bien.
Écrire les instructions nécessaires.*/

