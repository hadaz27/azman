#include<stdio.h>

int main(){
    int choix;
    long annee;
    do {
        printf("Choisissez comment vous souhaitez convertir votre année :\n1 : Mois\n2 : Jours\n3 : Heures\n4 : Minutes\n5 : Secondes\n");scanf("%d",&choix);
        if (choix < 1 || choix > 5)
            printf("Veuillez faire un choix disponible dans le menu !\n");
    } while (choix < 1 || choix > 5);
    printf("Entrez le nombres d'année que vous souhaitez convertir :\n");scanf("%ld",&annee);
    switch(choix){
        case 1 :
            printf("%d mois\n",annee * 12);
            break;
        case 2 :
            printf("%d jours\n",annee * 365);
            break;
        case 3 :
            printf("%d heures\n", annee * 8760);
            break;
        case 4 :
            printf("%d minutes\n", annee * 525600);
            break;
        case 5 :
            printf("%d secondes\n",annee * 31536000);
            break;
    }
}
/*Écrivez un programme C piloté par menu pour convertir une année donnée en :
Mois
Jours
Heures
Minutes
Secondes
Pour plus de simplicité, n'incluez pas l'année bissextile 
(sauf si vous êtes courageux pour le faire). 1 an = 365 jours, 1 mois = 30 jours.*/