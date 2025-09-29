#include<stdio.h>
#include<stdlib.h>

int main(){
    typedef struct{
        float x,y;
    }point;

    point p;
    point *ptr = &p;

    ptr->x = 3.5;
    ptr->y = 4.7;
    printf("x = %.2f et y = %.2f\n",ptr->x,ptr->y);
}
/*Écrivez un programme C qui définit une structure pour représenter un point dans un plan avec
les champs x et y. Utilisez des pointeurs pour créer une variable de cette structure et 
modifiez ses valeurs.Affichez les valeurs du point.*/