#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n = 10;
    int* t = NULL;
    int min;
    while (1)
    {
        t = (int *)malloc(n * sizeof(int));
        printf("entrer %d entiers: ", n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &t[i]);
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (t[i] < t[j])
                {
                    min = t[i];
                    t[i] = t[j];
                    t[j] = min;
                }
            }
        }
        printf("le tableau: \n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", t[i]);
        }
        printf("\n Entrer 0 pour quitter ou Entrer le nouveau nombre d'entiers: ");
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        free(t);
    }
    return 0; 
}