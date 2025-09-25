#include<stdio.h>

int main(){
    int jour,mois,annee;
    printf("Entrez la date sous ce format : DD/MM/AA\n");
    printf("Entrez le jour :\n");scanf("%d",&jour);
    printf("Entrez le mois :\n");scanf("%d",&mois);
    printf("Entrez l'année :\n");scanf("%d",&annee);
    printf("%d-",jour);
    switch(mois){
        case 1 :
            printf("Janvier-");
            break;
        case 2 :
            printf("Février-");
            break;
        case 3 :
            printf("Mars-");
            break;
        case 4 :
            printf("Avril-");
            break;
        case 5 :
            printf("Mai-");
            break;
        case 6 :
            printf("Juin-");
            break;
        case 7 :
            printf("Juillet-");
            break;
        case 8 :
            printf("Août-");
            break;
        case 9 :
            printf("Septembre-");
            break;
        case 10 :
            printf("Octobre-");
            break;
        case 11 :
            printf("Novembre-");
            break;
        case 12 :
            printf("Décembre-");
            break;
    }
    printf("%d\n",annee);
}
//Écrivez un programme C qui lit une date au format 15/09/2012 et
//l'affiche sous le format suivant : 15-Septembre-2012.

