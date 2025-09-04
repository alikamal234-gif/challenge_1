#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_BOOKS 50
int search(int cmp , char titre[50][50], char auteur[50][50],float prix[50],int quantite[50])
{
    char searcht[MAX_BOOKS];
    system("cls");
    printf("Titre du livre: \n");
    getchar();
    fgets(searcht, sizeof(searcht), stdin);
    for (int i = 0; i < cmp; i++)
    {
        if (strcmp(searcht, titre[i]) == 0)
        {
            printf("//=> titre de livre : %s\n//=> nom de l'auteur : %s\n//=> le prix : %f\n//=> le quantite : %d \n", titre[i], auteur[i], prix[i], quantite[i]);
        }
    }
}
int main()
{
    char titre[MAX_BOOKS][MAX_BOOKS];
    char auteur[MAX_BOOKS][MAX_BOOKS];
    float prix[MAX_BOOKS];
    int quantite[MAX_BOOKS];
    int choix = 0;
    int cmp = 0;
    char searcht[MAX_BOOKS];
    char suppreme[MAX_BOOKS];
    do
    {

        printf("-------menu---------\n");
        printf("1 Ajouter un livre au stock.\n");
        printf("2 Afficher tous les livres disponibles.\n");
        printf("3 Rechercher un livre par son titre.\n");
        printf("4 Mettre à jour la quantité d'un livre.\n");
        printf("5 Supprimer un livre du stock.\n");
        printf("6 Afficher le nombre total de livres en stock.\n");

        scanf("%d", &choix);

        switch (choix)

        {

        case 1:
            system("cls");
            printf("Titre du livre: \n");
            getchar();
            fgets(titre[cmp], sizeof(titre), stdin);
            printf("Auteur du livre : ");
            getchar();
            fgets(auteur[cmp], sizeof(auteur), stdin);
            printf("Prix du livre : ");
            getchar();
            scanf("%f", &prix[cmp]);
            printf("Qauntite du livre : ");
            getchar();
            scanf("%d", &quantite[cmp]);
            cmp++;
            break;

        case 2:
            system("cls");
            printf("-------Liste des livres---------\n");

            for (int i = 0; i < cmp; i++)
            {
                printf("//=> titre de livre : %s\n//=> nom de l'auteur : %s\n//=> le prix : %f\n//=> le quantite : %d \n", titre[i], auteur[i], prix[i], quantite[i]);
                printf("-------Liste des livres---------\n");
            }

            

            break;

        case 3:
            search(cmp,titre,auteur,prix,quantite);
            break;

        case 4:
            system("cls");
            printf("Titre du livre: \n");
            getchar();
            fgets(searcht, sizeof(searcht), stdin);
            for (int i = 0; i < cmp; i++)
            {
                if (strcmp(searcht, titre[i]) == 0)
                {
                    printf("saisirez la nouvelle Qauntite ");
                    getchar();
                    int new_quantite;
                    scanf("%d", &new_quantite);
                    quantite[i] = new_quantite;
                }
            }
            break;

        case 5:
            system("cls");
            printf("Titre du livre: \n");
            getchar();
            fgets(suppreme, sizeof(suppreme), stdin);
            for (int i = 0; i < cmp; i++)
            {
                if (strcmp(suppreme, titre[i]) == 0)
                {
                    for (int j = i; j < cmp; j++)
                    {
                        strcpy(titre[j], titre[j + 1]);
                        strcpy(auteur[j], auteur[j + 1]);
                        prix[j] = prix[j + 1];
                        quantite[j] = quantite[j + 1];
                    }
                    cmp--;
                    break;
                }
            }
            break;

        case 6:
            break;

        default:
            printf("choix invalid");
        }
    } while (choix != 0);
}