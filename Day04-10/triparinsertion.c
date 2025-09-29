#include<stdio.h>
#include<stdlib.h>

void tri(){
    int nb,j,tmp;
    
    printf("Entrez nombre d'éléments à stocker dans le tableau :\n");scanf("%d",&nb);
    int tab[nb];
    for(int i = 0;i < nb;i++){
        printf("Entrez Tab[%d] : \n",i);scanf("%d",&tab[i]);
    }

    for(int i = 1;i < nb;i++){
        j = i;
        while(j > 0 && tab[j] < tab[j - 1]){
            tmp = tab[j];
            tab[j] = tab[j - 1];
            tab[j - 1] = tmp;
            j--;
        }
    }
    system("cls");
    for(int i = 0;i < nb;i++){
        printf("Tab[%d] = %d\n",i,tab[i]);
    }
}

int main(){
    tri();
}