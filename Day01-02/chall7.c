#include<stdio.h>

int main(){
    char c;
    printf("Entrez un caractère :\n");scanf("%c",&c);
    if (c >= 'A' && c <= 'Z')
        printf("Le caractère est un alphabet majuscule\n");
    else
        printf("Le caractère n'est pas un alphabet majuscule\n");
}
/*Écrivez un programme pour vérifier si le caractère donné est un alphabet majuscule
ou non en utilisant
l'instruction conditionnelle if-else. Les lettres majuscules vont de 'A' à 'Z'.
Les valeurs ASCII de 'A' et 'Z' sont respectivement 65 et 90. Si la valeur ASCII
 d'un caractère est comprise entre 65 et 90, il s'agit d'un alphabet majuscule.*/

