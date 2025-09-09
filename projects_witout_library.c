#include <stdio.h>

struct contact
{
    char name[20][20];
    int number[20];
    char email[20][20];
};

int ajoute_contact();
int affiche_contact();
int searche_contact();
int modifie_contact();
int supprime_contact();
int strcmp(char str1[], char str2[]);
int strcpy(char test[],char test2[]);
struct contact ajoute;
int i = 0;
int main()
{
    int choice;

    do
    {

        printf("1_AJOUTE UN CONTACT\n2_AFFICHER TOUS LES CONTATS\n3_SEARCHER A UN CONTACT\n4_MODIFIE UN CONTACT\n5_SUPPRRIME UN CONTACTS\n6_QUIT.\n");
        printf(">>> ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            ajoute_contact();
            break;
        case 2:
            affiche_contact();
            break;
        case 3:
            searche_contact();
            break;
        case 4:
            modifie_contact();
            break;
        case 5:
            supprime_contact();
        case 0:
            return 0;
        default:
            break;
        }

    } while (choice != 0);
}

int ajoute_contact()
{

    getchar();
    printf("name : ");
    fgets(ajoute.name[i], 20, stdin);
    printf("phonenumber : ");
    scanf("%d", &ajoute.number[i]);
    printf("email : ");
    getchar();
    fgets(ajoute.email[i], 20, stdin);
    i++;
    return i;
}
int affiche_contact()
{
    for (int j = 0; j < i; j++)
    {
        printf("===================== contact ==================\n");
        printf("name : %s\n", ajoute.name[j]);
        printf("number : %d\n", ajoute.number[j]);
        printf("email : %s\n", ajoute.email[j]);
        printf("===================== contact ==================\n");
    }
    return i;
}
int searche_contact()
{
    char searche[20];
    getchar();
    printf("nom de contact : ");
    fgets(searche, 20, stdin);
    for (int k = 0; k < 20; k++)
    {
        if (strcmp(searche, ajoute.name[k]) == 0)
        {
            printf("===================== %s ============\n", ajoute.name[k]);
            printf("name : %s ", ajoute.name[k]);
            printf("number : %d \n", ajoute.number[k]);
            printf("email : %s \n", ajoute.email[k]);
            printf("===================== %s ============\n", ajoute.name[k]);
        }
    }
}
int strcmp(char str1[], char str2[])
{
    int y = 0;
    int i;
    for (int u = 0; str1[u] != '\0' && str2[u] != '\0'; u++)
    {
        if (str1[u] == str2[u])
        {
            y++;
            continue;
        }
        else
        {

            return 1;
        }
    }

    if (str1[y] == '\0' && str2[y] == '\0')
    {
        return 0;
    }
}
int modifie_contact()
{
    char modifie[20];
    getchar();
    printf("nom de contact : ");
    fgets(modifie, 20, stdin);
    for (int k = 0; k < 20; k++)
    {
        if (strcmp(modifie, ajoute.name[k]) == 0)
        {
            
            printf("new name : ");
            fgets(ajoute.name[k], 20, stdin);
            printf("new phonenumber : ");
            scanf("%d", &ajoute.number[k]);
            printf("new email : ");
            getchar();
            fgets(ajoute.email[k], 20, stdin);
        }
    }
}
int supprime_contact(){
    char supprime[20];
    getchar();
    printf("nom de contact : ");
    fgets(supprime, 20, stdin);
    for (int k = 0; k < i; k++)
    {
        if (strcmp(supprime, ajoute.name[k]) == 0)
        {
            strcpy(ajoute.name[k],ajoute.name[k+1]);
            ajoute.number[k]=ajoute.number[k+1];
            strcpy(ajoute.email[k],ajoute.email[k+1]);
            
            printf("your delete is successful !! \n");
        }
    }
    i--;
}

int strcpy(char test[],char test2[]){
    for(int z = 0 ; z<10; z++){
        test[z]=test2[z];
    }
}