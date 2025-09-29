#include<stdio.h>
#include<stdlib.h>

void recherche(){
    int nb,rech,flag = 0;
    printf("Entrez la taille de votre tableau :\n");scanf("%d",&nb);
    int tab[nb];

    for(int i = 0; i < nb;i++){
        printf("Entrez la valeur T[%d] : \n",i);scanf("%d",&tab[i]);
    }
    system("cls");
    printf("Entrez la valeur à rechercher : \n");scanf("%d",&rech);
    for(int i = 0;i < nb;i++){
        if(rech == tab[i]){
            flag = 1;
            printf("La valeur %d se trouve à la position Tab[%d]\n",rech,i);
            break;
        }
    }
    if(!flag){
        printf("La valeur que vous recherchez ne se trouve pas dans le tableau :(\n");
    }
}

int main(){
    recherche();
}