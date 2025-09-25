#include<stdio.h>
#include<math.h>

int main(){
    float delta;
    float x1,x2;
    int a,b,c;
    printf("Entrez a :\n");scanf("%d",&a);
    printf("Entrez b :\n");scanf("%d",&b);
    printf("Entrez c :\n");scanf("%d",&c);
    delta = b * b - 4*a*c;
    if (delta > 0){
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("Votre équation possède 2 solutions,%.2f et %.2f\n",x1,x2);
    } 
    else if(delta == 0){
        x1 = (-b / 2 * a);
        printf("Votre équation possède 1 solution : %.2f\n",x1);
    }
    else{
        printf("Votre équation ne possède pas de solution\n");
    }
}
//Écrivez un programme C qui permet de calculer les solutions possibles d’une équation du deuxième degré.