#include<stdio.h>

int main(){
    int a,b,res = 0;
    printf("Entrez la première valeur :\n");scanf("%d",&a);
    printf("Entrez la deuxième valeur :\n");scanf("%d",&b);
    res = a + b;
    if (a == b)
        printf("Les deux valeurs sont identiques ! Le résultat est %d\n",res * 3);
    else
        printf("La somme est égale à : %d\n",res);
}
//Écrivez un programme C pour calculer la somme de deux valeurs entières données.
//Si les deux valeurs sont identiques, le programme doit renvoyer le triple de leur somme.