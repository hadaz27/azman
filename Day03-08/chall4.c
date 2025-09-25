#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    char string[100];
    printf("Entrez la première chaine :\n");fgets(str,sizeof(str),stdin);str[strcspn(str,"\n")] = '\0';
    printf("Entrez la deuxième chaine :\n");fgets(string,sizeof(string),stdin);string[strcspn(string,"\n")] = '\0';
    int res = strcmp(str,string);

    if (res == 0)
        printf("Les chaînes sont identiques !\n");
    else
        printf("Les chaînes ne sont pas identiques !\n");
}