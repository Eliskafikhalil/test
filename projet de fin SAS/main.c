#include <stdio.h>
#include <stdlib.h>
typedef struct deadline{
    int jours;
int heurs;
int minit }deadline;
typedef struct taches{
    int id,status;
    char titre[50];
    char description[100] ;
    deadline n;

}taches;

int main()
{
    int num,chose;

    printf("-------gestion_todo--------\n");
    printf ("1 ajouter un nouvelle tache\n");
    printf("2 ajouter plusieurs nouvelle taches \n");
    printf("3 afficher la liste de toutes les taches\n");
    printf ("4 Modifier une t�che \n");
    printf ("5 Supprimer une t�che par identifiant\n");
    printf("6 Rechercher les Taches \n");
    printf ("7 Statistiques \n");
    printf("8 qitter \n");

    printf("------donne_ton_chose-------\n");
    scanf("%d",&num);

    switch (num)
    {

    case 1:
        printf("identifiant unique \n un titre \n une description\n un deadline et son statut a r�aliser en cours de r�alisation finalis�e");
        break;
    case 2:
        printf ("nouvelle tache");
        break;
    case 3:
        printf("Identifiant \n Titre\n Description\n Deadline\n Statut \n");
        break;
    case 4:
        printf("Modifier la description d'une tache \n Modifier le statut d�une tache\n Modifier le deadline d�une tache");
        break;
    case 5:
        printf ("Supprimer une tache par identifiant");
        break;

    case 6:
        printf("Rechercher une t�che par son Identifiant \n Rechercher une t�che par son Titre");
    case 7:
        printf ("Afficher le nombre total des t�ches \n Afficher le nombre de t�ches compl�tes et incompl�tes \n Afficher le nombre de jours restants jusqu'au d�lai de chaque t�che\n");
        break;
    default:
        printf("valide num ");

    }

    return 0;
}
