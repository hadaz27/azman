#include<stdio.h>
#include<stdlib.h>

void    bubblesort(){
    int nb,temp;
    printf("Entrez la taille de votre tableau :\n");scanf("%d",&nb);
    int tab[nb];

    for(int i = 0; i < nb;i++){
        printf("Entrez la valeur T[%d] : \n",i);scanf("%d",&tab[i]);
    }

    for(int i = 0;i < nb - 1;i++){
        for(int j = 0;j < nb - i -1;j++){
            if(tab[j] > tab[j + 1]){
                temp = tab[j + 1];
                tab[j + 1] = tab[j];
                tab[j] = temp;
            }
        }
    }
    system("cls");
    for(int i = 0;i < nb;i++){
        printf("La valeur T[%d] = %d\n",i,tab[i]);
    }
}

int main(){
    bubblesort();
}