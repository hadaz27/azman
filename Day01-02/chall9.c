#include<stdio.h>

int main(){
    char c;
    printf("Entrez un caractère :\n");scanf("%c",&c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        if (c >= 'a' && c <= 'z'){
            printf("Le caractère fait partie des alphabets et il est minuscule\n");
        }
        else{
            printf("Le caractère fait partie des alphabets et il est majuscule\n");
        }
    }
    else{
        printf("Votre caractère ne fait pas partie des alphabets\n");
    }
}
//Écrivez un programme C qui lit un caractère et détermine s'il fait partie des alphabets
//ou non.
//Et s'il l'est, dire en plus s’il est une minuscule ou une majuscule.\n

