#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[] = "fndfifjdsblfdbfsbhadddadcristianojdslbf";
    char h[30];
    int index;
    printf("Entrez la sous chaine que vous recherchez dans la chaine principale :\n");fgets(h,30,stdin);h[strcspn(h,"\n")] = '\0';
    int j = 0;
    int i = 0;
    for(i = 0;str[i] != '\0';i++){
        while(h[j] == str[i] && h[j] != '\0' && str[i] != '\0'){
            index = i;
            j++;i++;
        }
    }
    index = i - j;
    if(h[j] == '\0'){
        printf("La sous-chaine se trouve dans la chaine principale et l'index de la premiere occurence est %d\n",index);
    }
    else
        printf("La sous chaine ne se trouve pas dans la chaine principale\n");
}
//Écrivez un programme C qui utilise la recherche linéaire pour trouver une sous-chaîne dans une chaîne de caractères. 
//Affichez l'index de la première occurrence de la sous-chaîne ou un message indiquant que la sous-chaîne n'est pas trouvée.