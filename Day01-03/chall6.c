#include<stdio.h>

int main(){
    int conso,typeutil,typecontrat;
    printf("Entrez votre consommation en Kwh :\n");scanf("%d",&conso);
    printf("Quel type d'utilisateur êtes-vous ?\n1 : Résidentiel\n2 : Commercial\n");scanf("%d",&typeutil);
    printf("Quel est le type de votre contrat ?\n0 : Standard\n1 : réduit\n");scanf("%d",&typecontrat);
    int res = 0;
    switch(typeutil){
        case 1 :
            switch(typecontrat){
                case 0 :
                    res = conso * 0.20;
                    break;
                case 1 :
                    res = conso * 0.15;
                    break;
            }
            break;
        case 2 :
            switch(typecontrat){
                case 0 :
                    res = conso * 0.30;
                    break;
                case 1 :
                    res = conso * 0.25;
                    break;
            }
            break;
    }
    if (conso > 500){
        res *= 1.1;
    }
    printf("Votre facture d'éléctricité est de %d euros\n",res);
}
/*Écrivez un programme C pour calculer la facture d'électricité en fonction de :

Consommation d'électricité (en kWh)
Type d'utilisateur (1 pour résidentiel, 2 pour commercial)
Type de contrat (0 pour standard, 1 pour réduit)
Les tarifs sont :

Résidentiel : 0,20 €/kWh pour contrat standard, 0,15 €/kWh pour contrat réduit
Commercial : 0,30 €/kWh pour contrat standard, 0,25 €/kWh pour contrat réduit
Ajoutez un supplément de 10% si la consommation dépasse 500 kWh.*/