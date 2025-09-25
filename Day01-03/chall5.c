#include<stdio.h>

int main(){
    int budget,dest,nb;
    do{
        printf("Entrez votre budget :\n");scanf("%d",&budget);
        if (budget <= 0){
            printf("T'es à decouvert et tu veux voyager ?\n");
        }
    }while (budget <= 0);

    do{
        printf("Combien de personnes êtes-vous ?");scanf("%d",&nb);
        if (nb <= 0){
            printf("Veuillez entrez au moins une personne\n");
        }
    }while (nb <= 0);
    do{
        printf("Choisissez votre destination préféré\n1 : Plage\n2 : montagne\n3 : ville\n");scanf("%d",&dest);
    }while (dest <= 0 || dest > 3);

    char voyage[1000];
    char type[100];
    if (budget >= 1000)
        sprintf(voyage,"Notre agence vous recommande un voyage haut de gamme ");
    else if (budget >= 500)
        sprintf(voyage,"Notre agence vous recommande un voyage moyen de gamme ");
    else
        sprintf(voyage,"Notre agence vous recommande un voyage économique ");
    
    if (dest == 1 && nb > 2 && budget >= 1000)
        sprintf(type,"à la plage\n");
    else if (dest == 2 && budget >= 500 && nb <=2)
        sprintf(type,"à la montagne\n");
    else
        sprintf(type,"en ville\n");
    
    if (dest == 2 && budget >= 500 && nb <= 2)
            sprintf(type,"à la montagne\n");
    else
            sprintf(type,"en ville\n");
    printf("%s%s\n",voyage,type);
}
/*Écrivez un programme C pour planifier un voyage en fonction de :
Budget (en euros)
Destination (1 pour plage, 2 pour montagne, 3 pour ville)
Nombre de personnes
Les recommandations sont :

Budget >= 1000 € : Voyage haut de gamme
Budget entre 500 € et 1000 € : Voyage moyen
Budget < 500 € : Voyage économique
Les destinations recommandées sont :

Plage pour un budget >= 1000 € et > 2 personnes
Montagne pour un budget >= 500 € et <= 2 personnes
Ville pour tout budget et nombre de personnes*/