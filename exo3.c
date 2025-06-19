#include <stdio.h>

int main(void){
    int a;
    char b;
    printf("Entrer un charactere: \n");
    scanf("%c", &b);
    a = b;
    printf("caractere = %c ... code = %d .... code hexa = %x", b, a, a);
    return 0;
}