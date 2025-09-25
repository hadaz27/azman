#include<stdio.h>

int main(){
    int nb;
    printf("Entrez un nombre : \n");scanf("%d",&nb);
    if (nb % 2 == 0){
        printf("Votre nombre est pair\n");
    }
    else
        printf("Votre nombre est impair\n");
}
//Écrivez un programme qui demande un nombre et affiche si ce nombre est pair ou impair.