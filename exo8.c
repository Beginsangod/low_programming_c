#include <stdio.h>

int main(void){
    int a,b,b1,b2,r,q;
    q = 0;
    printf("Entrer 2 nombres: ");
    scanf("%d", &a);
    scanf("%d", &b);
    if (a > b)
    {
        b1 = a;
        b2 = b;
    }
    else
    {
        b1 = b;
        b2 = a;
    }
    r = b1;
    while (r > b2)
    {   
        for (int i = 0; i < b1; i++)
        {
            if ((i*b2) <= b1)
            {
                r = (b1 - (i * b2));
                q = i;
            }
            if (r < b2)
            {
                break;
            } 
        }
    }
    printf("la division de %d par %d a pour quotient: %d et reste: %d", b1, b2, q, r);
    return 0;
}