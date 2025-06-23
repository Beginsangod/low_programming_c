#include <stdio.h>

int main(void) {
    int a, b;
    int p = 0;
    int c;

    printf("Entrer 2 nombres: ");
    scanf("%d", &a);
    scanf("%d", &b);

    c = a;

    printf("%d * %d ", c, b);

    while (b > 0) {
        if (b % 2 != 0) { 
            p += a; 
            b--;
            printf(" = %d * %d + %d \n", a, b, p);
        } else {
            a *= 2;
            b /= 2;
            printf(" = %d * %d + %d \n", a, b, p);
        }
    }
    printf(" = %d\n", p);

    return 0;
}