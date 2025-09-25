#include<stdio.h>
#include<string.h>

int main(){
    char res[1000];
    printf("Entrez une chaine de caractère :\n");fgets(res,sizeof(res),stdin);res[strcspn(res,"\n")] = '\0';
    puts(res);
}
//Écrivez un programme C qui lit une chaîne de caractères entrée par l'utilisateur et l'affiche à l'écran. system("cls") system("pause")