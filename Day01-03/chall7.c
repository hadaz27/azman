#include<stdio.h>

int main(){
    int revenu,statut,impots;

    printf("Entrez votre revenu annuel en euros :\n");scanf("%d",&revenu);
    printf("Entrez votre statut fiscal :\n1 : célibataire\n2 : marié\n3 : chef de famille\n");scanf("%d",&statut);
    if (revenu <= 20000)
        impots = revenu * 0.05;
    else if (revenu > 20000 && revenu <= 50000)
        impots = revenu * 0.10;
    else
        impots = revenu * 0.2;

    if(impots > 1000){
        switch(statut){
            case 1 :
                impots = impots - 1000;
                break;
            case 2 :
                impots = impots - 2000;
                break;
            case 3 :
                impots = impots - 3000;
                break;
        }
    }
    printf("Vous devez %d euros à l'état\n",impots);
}
/*Écrivez un programme C pour calculer les impôts à payer en fonction de :

Revenu annuel (en euros)
Statut fiscal (1 pour célibataire, 2 pour marié, 3 pour chef de famille)
Déductions (en euros)
Les tranches d'imposition sont :

Revenu <= 20 000 € : 5%
Revenu > 20 000 € et <= 50 000 € : 10%
Revenu > 50 000 € : 20%
Les déductions sont :

Célibataire : Déduction de 1 000 €
Marié : Déduction de 2 000 €
Chef de famille : Déduction de 3 000 €*/