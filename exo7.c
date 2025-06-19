#include <stdio.h>

int main(void){
    int a;
    int n = 1;
    int div[n];
    printf("entre un nombre: ");
    scanf("%d", &a);
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            div[n - 1] = i;
            n += 1;
        }
    }
    printf("%d a pour diviseur: ", a);
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", div[i]);
    }
    return 0;
}