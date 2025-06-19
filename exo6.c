#include <stdio.h>

int main(void){
    int min,max,a;
    min = 999999999;
    max = 0;
    printf("Entrer des entier a la suite et terminer votre series par 0: ");
    while (1)
    {
        //si la valeur entrer n'est pas un nombre
        if (scanf("%d", &a) != 1)
        {
            printf("vous deviez entrer des nombres");
            break;
        }

        if (a == 0)
        {
            break;
        }

        if (max < a)
        {
            max = a;
        }

        if (min > a )
        {
            min = a;
        }
    }
    printf("le max de cette serie de nombre est : %d et le min : %d", max, min);
    return 0;
}