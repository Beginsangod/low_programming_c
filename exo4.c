#include <stdio.h>

int main(void){
    int a;
    printf("entrer un nombre: ");
    scanf("%d", &a);
    if (a % 2 == 0){
        printf("le nombre entrer est paire");
    }else
    {
        printf("le nombre entrer est impaire");
    }
    return 0;
}