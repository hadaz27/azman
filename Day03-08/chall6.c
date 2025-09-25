#include<stdio.h>
#include<string.h>

int main(){
    char c;
    char res[1000];
    int count = 0;
    int i = 0;

    printf("Entrez un caractère :\n");scanf("%c",&c);getchar();
    printf("Entrez une chaine de caractère :\n");fgets(res,sizeof(res),stdin);res[strcspn(res,"\n")] = '\0';
    while (res[i] != '\0'){
        if(c == res[i]){
            count++;
            i++;
        }
        else{
            i++;
        }
    }
    printf("Le caractère que vous avez entré apparaît %d fois dans votre chaîne !\n",count);
}
//Écrivez un programme C qui lit une chaîne de caractères et un caractère
//puis compte et affiche combien de fois le caractère apparaît dans la chaîne.

