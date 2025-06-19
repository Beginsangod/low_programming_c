#include <stdio.h>

int main(void){
    int a,b,c;
    printf("entrer trois nombres a,b,c: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("a est le nombre le plus grand des 3");
    }else if (b > a && b > c)
    {
        printf("b est le nombre le plus grand des 3");
    }else if (c > a && c > b)
    {
        printf("c est le nombre le plus grand des 3");
    }else{
        printf("il existe des egalites entre les valeurs");
    }
    return 0;
}