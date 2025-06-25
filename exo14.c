#include <stdio.h>

void initialisation_iNb_jours(int iNb_jour[12]);
void print_iNb_jour(int iNb_jours[12], int i);

int main(void){
    int i;
    int iNb_jours[12];
    initialisation_iNb_jours(iNb_jours);
    printf("Entrer le numero d'un mois ou le nom du mois: ");
    scanf("%d", &i);
    print_iNb_jour(iNb_jours, i);
    return 0;
}

void initialisation_iNb_jours(int iNb_jour[12]){
    for (int i = 0; i < 12; i++)
    {
        if (i+1 == 2)
        {
            iNb_jour[i] = 28;
        }
        else if (i+1 % 2 == 0 && (i+1 <= 7 || i+1 > 7))
        {
            iNb_jour[i] = 30;
        }
        else
        {
            iNb_jour[i] = 31;
        }
    }
}

void print_iNb_jour(int iNb_jours[12], int i){
    printf("le nombre de jour du %d est de: %d", i, iNb_jours[i]);
}