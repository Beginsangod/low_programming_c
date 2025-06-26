#include <stdio.h>
#include <stdlib.h>

void affiche_heure(int iHeures,int iMinutes ,int iSecondes);
void saisir_heure(int *iHeures, int *iMinutes ,int *iSecondes);
void tick(int *iHeures,int *iMinutes ,int *iSecondes,int *millisecondes);

int main(void){
    int iHeures,iMinutes,iSecondes;
    int millisecondes = 0;
    saisir_heure(&iHeures, &iMinutes, &iSecondes);
    affiche_heure(iHeures,iMinutes,iSecondes);
    while (1)
    {
        affiche_heure(iHeures,iMinutes,iSecondes);
        tick(&iHeures,&iMinutes,&iSecondes, &millisecondes);
        system("cls");
    }
    return 0;
}

void affiche_heure(int iHeures,int iMinutes ,int iSecondes){
    if (iHeures < 2)
    {
        printf("%02d heure ", iHeures);
    }else
    {
        printf("%02d heures ", iHeures);
    }
    
    if (iMinutes < 2)
    {
        printf("%02d minute ", iMinutes);
    }else
    {
        printf("%02d minutes ", iMinutes);
    }

    if (iSecondes < 2)
    {
        printf("%02d seconde ", iSecondes);
    }else
    {
        printf("%02d secondes ", iSecondes);
    }
}

void saisir_heure(int *iHeures,int *iMinutes ,int *iSecondes){
    printf("Entrer l'heures puis les minutes et les secondes actuelles: ");
    scanf("%d", iHeures);
    scanf("%d", iMinutes);
    scanf("%d", iSecondes);
}

void tick(int *iHeures,int *iMinutes ,int *iSecondes, int *millisecondes){
    if (*millisecondes >= 60)
    {
        *millisecondes = 0;
        (*iSecondes)++;
    }
    else
    {
        (*millisecondes)++;
    }
    if (*iSecondes >= 60)
    {
        *iSecondes = 0;
        (*iMinutes)++;
    }
    if (*iMinutes >= 60)
    {
        *iMinutes = 0;
        (*iHeures)++;
    }
    if (*iHeures >= 24)
    {
        *iHeures = 0;
    }
}