#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    srand(time(NULL));
    int hasard = rand() % 7 + 1;
    switch(hasard){
        case 1 :
            printf("Lundi\n");
            break;
        case 2 :
            printf("Mardi\n");
            break;
        case 3 :
            printf("Mercredi\n");
            break;
        case 4 :
            printf("Jeudi\n");
            break;
        case 5 :
            printf("Vendredi\n");
            break;
        case 6 :
            printf("Samedi\n");
            break;
        case 7 :
            printf("Dimanche\n");
            break;
    }
}