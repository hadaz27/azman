#include<stdio.h>
#include<string.h>

char *upper(char *str){
    int i = 0;
    while (*str != '\0'){
        if (*str >= 'a' && *str <= 'z'){
            *str -= 32;
            str++;
        }
        else
            str++;
    }
    return(str);
}

int main(){
    char str[100];
    printf("Entrez une chaine :\n");fgets(str,sizeof(str),stdin);str[strcspn(str,"\n")] = '\0';
    puts(upper(str));
}
//Écrivez un programme C qui lit une chaîne de caractères et convertit tous les caractères en majuscules. Affichez la chaîne modifiée.

