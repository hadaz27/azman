#include<stdio.h>

int main(){
    char c;
    printf("Entrez un caractère :\n");scanf("%c",&c);
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
        switch(c){
            case 'a' : case 'A' :
            case 'e' : case 'E' :
            case 'i' : case 'I' :
            case 'o' : case 'O' :
            case 'u' : case 'U' :
            case 'y' : case 'Y' :
                printf("Votre caractère est une voyelle !\n");break;
            default :
                printf("Votre caractère n'est pas une voyelle !\n");
        }
    }
    else
        printf("Le caractère entré n'est pas une lettre !\n");
}
//Écrivez un programme en C qui vérifie si un caractère saisi
//par l'utilisateur est une voyelle ou non en utilisant l'instruction switch case.