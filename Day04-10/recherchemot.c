#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int recherche(){
    char str[1000] = "brsuoldfnorbeorbeinorebobfesnfdadknknkdnsobdnsoibdcrisjlbdosbfrodbsfomessiifhdofhdfhofdf";
    char rech[20];
    int index,j;

    printf("Entrez le mot que vous rechercher dans le texte : \n");fgets(rech,20,stdin);rech[strcspn(rech,"\n")] = '\0';

    for(int i = 0;str[i] != '\0';i++){
        j = 0;
        while(rech[j] == str[i] && rech[j] != '\0' && str[i] != '\0'){
            index = i;
            j++;i++;
        }
    }
    if(rech[j] == '\0'){
        return(index);
    }
    else
        return(-1);
}

int main(){
    if(recherche() == -1)
        printf("Le mot n'a pas été trouvé dans la chaine \n");
    else
        printf("Le mot a été trouvé et la premiere occurence se trouve à l'indice %d\n",recherche());
}

//Écrivez un programme C qui utilise la recherche de sous-chaîne pour trouver la première occurrence d'un mot dans un texte donné.
//Affichez la position de la première occurrence ou un message indiquant que le mot n'est pas trouvé.