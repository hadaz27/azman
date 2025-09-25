#include<stdio.h>
#include<string.h>

char *low(char *str){
    int i = 0;
    while (str[i] != '\0'){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
            i++;
        }
        else
            i++;
    }
    return(str);
}

int main(){
    char res[100];
    printf("Entrez une chaîne : \n");fgets(res,sizeof(res),stdin);res[strcspn(res,"\n")] = '\0';
    puts(low(res));
}