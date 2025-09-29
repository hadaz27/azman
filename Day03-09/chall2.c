#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    typedef struct{
        char nom[20];
        char prenom[20];
        int tab[100];
        int nb;
    }etudiant;

    etudiant e;
    
    printf("Veuillez entrer votre nom :\n");fgets(e.nom,(sizeof(e.nom)),stdin);e.nom[strcspn(e.nom,"\n")] = '\0';
    printf("Veuillez entrer votre prenom :\n");fgets(e.prenom,(sizeof(e.prenom)),stdin);e.prenom[strcspn(e.prenom,"\n")] = '\0';

    printf("Combien de notes avez-vous à saisir ?\n");scanf("%d",&e.nb);

    for(int i = 0; i < e.nb;i++){
        system("cls");
        printf("Entrez la note à stocker :\n");scanf("%d",&e.tab[i]);
    }
    system("cls");
    printf("Vous vous appelez %s %s ",e.nom,e.prenom);
    printf("et voici vos notes :\n");
    for (int i = 0; i < e.nb;i++){
        printf("%d\n",e.tab[i]);
    }
}

//Écrivez un programme C qui définit une structure pour représenter un étudiant avec les champs nom,
//prenom, et un tableau d'entiers pour stocker les notes. Assignez des valeurs aux champs et aux notes, puis affichez les informations de l'étudiant.