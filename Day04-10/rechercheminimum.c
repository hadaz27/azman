#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void recherche(){
    int nb;
    printf("Entrez la taille de votre tableau :\n");scanf("%d",&nb);
    int tab[nb];

    for(int i = 0;i < nb;i++){
        printf("Entrez la valeur tab[%d] :\n",i);scanf("%d",&tab[i]);
    }
    system("cls");
    int res = tab[0];
    for(int i = 1;i < nb;i++){
        if(tab[i] < res)
            res = tab[i];
    }
    printf("La valeur minimale dans votre tableau est %d\n",res);
}

int main(){
    recherche();
}