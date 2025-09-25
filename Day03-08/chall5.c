#include<stdio.h>
#include<unistd.h>
#include<string.h>

int main(){
    char res[100];
    printf("Entrez une chaine de caractère :\n");fgets(res,sizeof(res),stdin);res[strcspn(res,"\n")] = '\0';
    int length = strlen(res);
    do{
        write(1,&res[length],1);
        length--;
    }while (length != -1);
    write(1,"\n",1);
}
//Écrivez un programme C qui lit une chaîne de caractères et affiche la chaîne inversée. 
//Par exemple, si la chaîne est "abcd", le programme doit afficher "dcba".

