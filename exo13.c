#include <stdio.h>

void affiche_matrice(int iMat[5][5]);

int main(void){
    int iMat[5][5] = {{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}};
    affiche_matrice(iMat);
    return 0;
}

void affiche_matrice(int iMat[5][5]){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", iMat[i][j]);
        }
        printf("\n");
    }
}