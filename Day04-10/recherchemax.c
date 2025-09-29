#include<stdio.h>
#include<stdlib.h>

#include<stdio.h>
#include<stdlib.h>

void recherchemax(){
    int nb,res = 0;
    printf("Entrez la taille de votre tableau :\n");scanf("%d",&nb);
    int tab[nb];

    for(int i = 0;i < nb;i++){
        printf("Entrez la valeur tab[%d] :\n",i);scanf("%d",&tab[i]);
    }
    system("cls");
    for(int i = 0;i < nb;i++){
        if(tab[i] > res)
            res = tab[i];
    }
    printf("La valeur maximale dans votre tableau est %d\n",res);
}

int main(){
    recherchemax();
}