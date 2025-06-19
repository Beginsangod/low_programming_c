#include <stdio.h>

int main(void){
    int a,b;
    printf("Entrer un  nombre: \n");
    scanf("%d", &a);
    printf("Entrer un  nombre: \n");
    scanf("%d", &b);
    printf("les deux nombres initiaux: %d et %d \n", a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("les deux nombres initiaux: %d et %d", a, b);
    return 0;
}
