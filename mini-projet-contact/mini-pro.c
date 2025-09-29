#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct{
    char nom[30];
    char tel[12];
    char email[30];
    }infos;

void    ajouter(infos contact[],int *nb);
void    afficher(infos contact[],int *nb);
void    supprimer(infos contact[],int *nb);
void    modifier(infos contact[],int *nb);
void    rechercher(infos *contact,int *nb);

void    ajouter(infos contact[],int *nb){
    int n = 0;
    do{
        system("cls");
        printf("Combien de contact souhaitez-vous ajouter ?\n");scanf("%d",&n);getchar();
        if(n <= 0){
            system("cls");
            printf("Incorrect ! Veuillez entrer un nombre supérieur à 0 !\n");
            system("pause");
        }
    }while(n <= 0);
    if(*nb + n > 100)
    {
        system("cls");
        printf("Votre carnet de contact est déjà plein !\n");
        system("pause");
        return;
    }
    for(int i = *nb; i < *nb + n;i++){
        system("cls");
        printf("Entrez le nom du contact à ajouter :\n");fgets(contact[i].nom,sizeof(contact[i].nom),stdin);contact[i].nom[strcspn(contact[i].nom,"\n")] = '\0';
        do{
            printf("Entrez le numéro de téléphone du contact à ajouter :\n");fgets(contact[i].tel,sizeof(contact[i].tel),stdin);contact[i].tel[strcspn(contact[i].tel,"\n")] = '\0';
            if ((contact[i].tel[0] != '0') || (contact[i].tel[1] != '5' && contact[i].tel[1] != '6' && contact[i].tel[1] != '7') || strlen(contact[i].tel) != 10){
                system("cls");
                printf("Veuillez entrer un numéro valide !\n");
            }
        }while((contact[i].tel[0] != '0') || (contact[i].tel[1] != '5' && contact[i].tel[1] != '6' && contact[i].tel[1] != '7') || strlen(contact[i].tel) != 10);
        printf("Entrez l'adresse e-mail du contact à ajouter :\n");fgets(contact[i].email,sizeof(contact[i].email),stdin);contact[i].email[strcspn(contact[i].email,"\n")] = '\0';
    }
    *nb += n;
    system("cls");
    printf("Vos contacts ont été ajoutés avec succès\n");
    system("pause");
}

void    afficher(infos contact[],int *nb){
    if(*nb == 0){
        system("cls");
        printf("Il n'y a aucun contact dans votre carnet !\n");
        system("pause");
    }
    else{
        system("cls");
        for (int i = 0;i < *nb; i++){
            printf("Le nom de votre contact numéro %d est : %s, son numéro de téléphone est : %s et son email est : %s\n",i + 1,contact[i].nom,contact[i].tel,contact[i].email);
        }
        system("pause");
    }
}

void    modifier(infos contact[],int *nb){
    int flag = 0;
    char rech[30];
    if (*nb == 0){
        system("cls");
        printf("Il n'y a aucun contact dans votre carnet !\n");
        system("pause");
    }
    else{
        system("cls");
        printf("Entrez le nom du contact dont vous voulez modifier les informations : \n");fgets(rech,30,stdin);rech[strcspn(rech,"\n")] = '\0';
        for(int i = 0;i < *nb;i++){
            if (strcmpi(rech,contact[i].nom) == 0){
                flag = 1;
                printf("Entrez le nouveau nom : \n");fgets(contact[i].nom,sizeof(contact[i].nom),stdin);contact[i].nom[strcspn(contact[i].nom,"\n")] = '\0';
                do{
                    printf("Entrez le nouveau numéro de téléphone : \n");fgets(contact[i].tel,sizeof(contact[i].tel),stdin);contact[i].tel[strcspn(contact[i].tel,"\n")] = '\0';
                    if((contact[i].tel[0] != '0') || contact[i].tel[1] != '5' && contact[i].tel[1] != '6' && contact[i].tel[1] != '7' || strlen(contact[i].tel) != 10){
                        system("cls");
                        printf("Erreur ! Veuillez entrer un numéro de téléphone valide !\n");
                    }
                }while((contact[i].tel[0] != '0') || contact[i].tel[1] != '5' && contact[i].tel[1] != '6' && contact[i].tel[1] != '7' || strlen(contact[i].tel) != 10);
                printf("Entrez la nouvelle adresse e-mail : \n");fgets(contact[i].email,sizeof(contact[i].email),stdin);contact[i].email[strcspn(contact[i].email,"\n")] = '\0';
                system("cls");
                printf("Les informations de votre contact ont été modifiées avec succès !\n");
                system("pause");
                break;
            }
        }
        if (!flag){
            system("cls");
            printf("Le contact n'a pas été trouvé :(\n");
            system("pause");
        }
    }
}

void    rechercher(infos contact[],int *nb){
    char rech[30];
    int flag = 0;
    system("cls");
    printf("Veuillez entrer le nom du contact que vous rechercher :\n");fgets(rech,30,stdin);rech[strcspn(rech,"\n")] = '\0';
    for (int i = 0;i < *nb;i++){
        if (strcmpi(rech,contact[i].nom) == 0){
            flag = 1;
            system("cls");
            printf("Voici les informations du contact recherché :\n");
            printf("Nom : %s\n",contact[i].nom);
            printf("Numéro de téléphone : %s\n",contact[i].tel);
            printf("E-mail : %s\n",contact[i].email);
            system("pause");
            break;
        }
    }
    if(!flag){
        system("cls");
        printf("Le contact que vous recherchez ne figure pas dans le carnet :(\n");
        system("pause");
    }
}

void    supprimer(infos contact[], int *nb){
    char rech[30];
    int flag = 0;
    system("cls");
    printf("Entrez le nom du contact que vous souhaitez supprimer :\n");fgets(rech,30,stdin);rech[strcspn(rech,"\n")] = '\0';
    for (int i = 0;i < *nb;i++){
        if(strcmpi(rech,contact[i].nom) == 0){
            flag = 1;
            for(int j = i; j < *nb - 1;j++){
                strcpy(contact[j].nom,contact[j + 1].nom);
                strcpy(contact[j].tel,contact[j + 1].tel);
                strcpy(contact[j].email,contact[j + 1].email);
            }
            (*nb)--;
            system("cls");
            printf("Le contact a été supprimé avec succès !\n");
            system("pause");
        }
    }
    if (!flag){
        system("cls");
        printf("Le contact que vous souhaitez supprimer ne figure pas dans le carnet !\n");
        system("pause");
    }
}

int main(){
    int choix,nb = 3;
    infos contact[100] = {
        {"Lionel","0708042147","messi@gmail.com"},
        {"cristiano","0654123698","cr7@gmail.com"},
        {"Njota","0512478920","njota@hotmail.com"}
    };
    do{
        system("cls");
        printf("\tMENU\t\n");
        printf("1 : Ajouter un contact\n2 : Modifier un contact\n3 : Supprimer un contact\n4 : Afficher tous les contacts\n5 : Rechercher un contact\n0 : Quitter\n");scanf("%d",&choix);getchar();
        switch(choix){
            case 0 :
                system("cls");
                printf("Ciao !\n");
                break;
            case 1:
                ajouter(contact,&nb);
                break;
            case 2 :
                modifier(contact,&nb);
                break;
            case 3 :
                supprimer(contact,&nb);
                break;
            case 4 :
                afficher(contact,&nb);
                break;
            case 5 :
                rechercher(contact,&nb);
                break;
            default :
                system("cls");
                printf("Merci de faire un choix dipsonible dans le menu !\n");
                system("pause");
        }
    }while (choix != 0);
}

/*1. Ajouter un Contact
Le programme demande les informations suivantes pour chaque contact :

Nom (chaîne de caractères)
Numéro de téléphone (chaîne de caractères)
Adresse e-mail (chaîne de caractères)
Ces informations sont stockées dans une structure Contact.

2. Modifier un Contact
Le programme permet à l'utilisateur de modifier les informations d'un contact existant.
L'utilisateur peut modifier le numéro de téléphone et l'adresse e-mail en fonction
du nom du contact;

3. Supprimer un Contact
Le programme permet à l'utilisateur de supprimer un contact de la liste en recherchant par nom. Une fois supprimé, le contact n'apparaît plus dans le carnet de contacts.

4. Afficher Tous les Contacts
Le programme affiche la liste complète des contacts avec leurs détails.

5. Rechercher un Contact
Le programme permet à l'utilisateur de rechercher un contact par son nom. Si le contact est trouvé, ses détails (nom, numéro de téléphone, adresse e-mail) sont affichés.*/