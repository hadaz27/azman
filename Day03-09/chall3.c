#include<stdio.h>
#include<stdlib.h>

void aire(float longueur, float largeur){
    float res = longueur * largeur;
    printf("L'aire de votre rectangle est de %.2f cm\n",res);
}

int main(){
    typedef struct{
        float longueur,largeur;
    }rectangle;

    rectangle rec;
    printf("Entrez la longueur de votre rectangle en cm :\n");scanf("%f",&rec.longueur);
    printf("Entrez la largeur de votre rectangle en cm :\n");scanf("%f",&rec.largeur);
    aire(rec.longueur,rec.largeur);
}

/*Écrivez un programme C qui définit une structure pour représenter un rectangle
avec les champs longueur et largeur. Écrivez une fonction qui prend une variable de cette structure
en argument et calcule l'aire du rectangle.
Affichez l'aire dans le programme principal.*/