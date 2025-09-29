#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    typedef struct{
        char nom[30];
        char prenom[30];
        int age;
    }personne;

    personne p1;
    printf("Veuillez entrer votre nom :\n");fgets(p1.nom,sizeof(p1.nom),stdin);p1.nom[strcspn(p1.nom,"\n")] = '\0';
    printf("Veuillez entrer votre prénom :\n");fgets(p1.prenom,sizeof(p1.prenom),stdin);p1.prenom[strcspn(p1.prenom,"\n")] = '\0';
    printf("Veuillez entre votre âge : \n");scanf("%d",&p1.age);
    system("cls");
    printf("Vous vous appelez %s %s et vous avez %d ans !\n",p1.nom,p1.prenom,p1.age);
    system("pause");
}

//Écrivez un programme C qui définit une structure pour représenter une personne avec les champs nom,
//prenom, et age. Créez une variable de cette structure, assignez des valeurs aux champs, et affichez ces valeurs.

