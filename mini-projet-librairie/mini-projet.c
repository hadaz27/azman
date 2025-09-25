#include<stdio.h>
#include<string.h>
#define taille 100

void ajouter(char titre[][30],char auteur[][30],float prix[],int quantite[],int *nb,int *max){
    int n;
    printf("Combien de livres souhaitez-vous ajouter ?\n");scanf("%d",&n);getchar();
    if (*max + n >= taille){
        printf("Le stock est déjà plein !\n");return;
    }
    for (int i = *max;i < *max + n;i++){
        printf("Entrez le titre du livre à ajouter :\n");fgets(titre[i],sizeof(titre[i]),stdin);titre[i][strcspn(titre[i], "\n")] = '\0';
        printf("Entrez l'auteur du livre :\n");fgets(auteur[i],sizeof(auteur[i]),stdin);auteur[i][strcspn(auteur[i],"\n")] = '\0';
        printf("Entrez le prix du livre :\n");scanf("%f",&prix[i]);getchar();
        printf("Entrez la quantité à ajouter en stock :\n");scanf("%d",&quantite[i]);getchar();
    }
    *max += n;
    *nb += n;
}

void modifier(char title[30],char titre[][30],int quantite[],int *max){
    int newquantity,flag = 0;
    printf("Entrez le titre du livre dont vous souhaitez modifier la quantité en stock :\n");fgets(title,30,stdin);title[strcspn(title,"\n")] = '\0';
    printf("Entrez la nouvelle quantité :\n");scanf("%d",&newquantity);getchar();
    for (int i = 0;i < *max;i++){
        if (strcmp(title,titre[i]) == 0){
            flag = 1;
            quantite[i] = newquantity;
            break;
        }
    }
    if (!flag){
        printf("Nous n'avons pas trouvé le livre que vous cherchez :(\n");
    }
}

void afficher(char titre[][30], char auteur[][30], float prix[], int quantite[],int *max){
    for (int i = 0; i < *max;i++){
        printf("Le titre du livre est %s\n",titre[i]);
        printf("L'auteur est %s\n",auteur[i]);
        printf("Le prix est de %.2f euros\n",prix[i]);
        printf("Nous avons %d de ce livre en stock\n\n",quantite[i]);
    }
}

int main(){
    int choix;
    char titre[taille][30];
    char auteur[taille][30];
    float prix[taille];
    int quantite[10000];
    char title[30];
    int newquantity;
    int sum;
    int max = 0;
    int nb;
    int trouve = 0;
    do{
        printf("Que souhaitez-vous faire ?\n1 : Ajouter un livre au stock\n2 : Afficher tous les livres disponibles\n3 : Mettre à jour la quantité d'un livre\n4 : Supprimer un livre du stock\n5 : Afficher le nombre total de livres en stock\n6 : Recherche un livre par son titre\n0 : Quitter\n");scanf("%d",&choix);getchar();
        if (choix < 0 || choix > 5)
            printf("Veuillez faire un choix disponible dans le menu !\n");
        switch(choix){
            case 1 :
                ajouter(titre,auteur,prix,quantite,&nb,&max);
                break;
            case 2 :
                afficher(titre,auteur,prix,quantite,&max);
                break;
            case 3 :
                modifier(title,titre,quantite,&max);
                break;
            case 4 :
                printf("Entrez le titre du livre à supprimer :\n");fgets(title,30,stdin);title[strcspn(title,"\n")] = '\0';
                trouve = 0;
                int i;
                for(i = 0; i < max;i++){
                    if (strcmpi(title,titre[i]) == 0){
                        for(int j = i;j < max - 1;j++){
                            strcpy(titre[i],titre[i + 1]);
                            strcpy(auteur[i],auteur[i + 1]);
                            prix[i] = prix[i + 1];
                            quantite[i] = quantite[i + 1];
                        }
                        max--;
                        trouve = 1;
                        printf("Le livre a été supprimé avec succès !\n");
                        break;
                    }
                }
                if (!trouve)
                    printf("Le livre n'a pas été trouvé :(\n");
                break;
            case 5 :
                sum = 0;
                for(int i = 0;i < max;i++){
                    sum += quantite[i];
                }
                printf("Le nombre total de livre en stock est de : %d\n\n",sum);
                break;
            case 6 :
                printf("Entrez le titre du livre que vous souhaitez rechercher :\n");fgets(title,sizeof(title),stdin);title[strcspn(title,"\n")] = '\0';
                trouve = 0;
                for (int i = 0; i < max; i++){
                    if (strcmpi(title,titre[i]) == 0){
                        printf("Le livre que vous recherchez diponible !\n");
                        trouve = 1;
                    }
                }
                if (!trouve){
                    printf("Le livre que vous recherchez n'est malheureusement pas disponible actuellement :(\n)");
                }
                break;
            case 0 :
                printf("Merci pour votre visite !\n");
                break;
        }
    }while(choix != 0);
}
/*1. Ajouter un Livre au Stock
Le programme demande les informations suivantes pour chaque livre :
Titre du livre.
Auteur du livre.
Prix du livre.
Quantité en stock.
Les informations sont stockées dans des tableaux distincts pour chaque attribut (titre, auteur, prix, quantité).
2. Afficher Tous les Livres Disponibles
Le programme parcourt les tableaux et affiche les détails de chaque livre (titre, auteur, prix, quantité).
3. Mettre à Jour la Quantité d'un Livre
Le programme permet de modifier la quantité en stock pour un livre donné.
L'utilisateur spécifie le titre du livre et la nouvelle quantité.
4. Supprimer un Livre du Stock
Le programme permet de supprimer un livre du stock en fonction de son titre.
Après la suppression, le livre n'apparaît plus dans la liste des livres disponibles.
5. Afficher le Nombre Total de Livres en Stock
Le programme calcule et affiche le nombre total de livres en stock, en additionnant les quantités de tous les livres.*/