#include<stdio.h>
#include<string.h>

int ft_strlen(char *str){
    int i = 0;
    while(*str != '\0'){
        i++;
        str++;
    }
    return (i);
}

int main(){
    char string[1000];
    printf("Entrez une chaine de caractère afin de calculer sa longueur :\n");fgets(string,sizeof(string),stdin);string[strcspn(string,"\n")] = '\0';
    int res = ft_strlen(string);
    printf("La taille de votre chaîne est de : %d\n",res);
}