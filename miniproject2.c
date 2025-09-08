#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ajoute();
typedef struct{
    char name[200][200];
    char telefone[200][200];
    char email[200][200];
}cont;
typedef struct{
    char newname[200][200];
    char newtelefone[200][200];
    char newemail[200][200];
}newcon;
cont cn;
newcon nwcn;
int main(){
    int choix;
    int i =0;
    int z =0;
    int k = 0;
    int r =0;
    char modifie[200];
    char supprime[200];
    char searche[200];
    do{
    printf("1_ajoute new contact\n2_Modifier un Contact\n3_Supprimer un Contact\n4_Afficher Tous les Contacts\n5_Rechercher un Contact\n");
    printf(">>> ");
    scanf("%d",&choix);
    
    
    switch (choix){
    
        case 1:
            system("clear");
            getchar();
            printf("name : ");
            fgets(cn.name[i],200,stdin);
            printf("telephone : ");
            fgets(cn.telefone[i],200,stdin);
            printf("email : ");
            fgets(cn.email[i],200,stdin);
            i++;
            break;
            
        case 2:
            
            getchar();
            printf("nom de contact : ");
            fgets(modifie,200,stdin);
            if(strcmp(modifie,cn.name[z])==0){
                printf("WE FOUND IT ");
                printf("new name : ");
                fgets(cn.name[z],200,stdin);
                printf("new telephone : ");
                fgets(cn.telefone[z],200,stdin);
                printf("new email : ");
                fgets(cn.email[z],200,stdin);
            }else {
                system("clear");
                printf("we didn't found it ");
                
            }
            break;
        case 3:
            getchar();
            printf("no de contact de supprime : ");
            fgets(supprime,200,stdin);
            printf("we found it \n");
            if(strcmp(supprime,cn.name[z])==0){
                strcpy(cn.name[z],"\0");
                strcpy(cn.telefone[z],"\0");
                strcpy(cn.email[z],"\0");
            }
            break;
        case 4:
            system("clear");
            
            for(int j =0 ; j < i ; j++){
            printf("_____________les contacts______________\n");
            printf("name : %s \n",cn.name[j]);
            printf("telephone : %s \n",cn.telefone[j]);
            printf("email : %s \n",cn.email[j]);
            printf("_____________les contacts______________\n");
            }
            
            k++;
            break;
        case 5:
            system("clear");
            getchar();
            printf("nom de contact : ");
            fgets(searche,200,stdin);
            if(strcmp(searche,cn.name[r])==0){
                printf("\n\n\n      WE FOUND IT \n");
                printf("//=> name : %s",cn.name[z]);
                printf("//=> telephone : %s",cn.telefone[z]);
                printf("//=>emai : %s\n\n\n",cn.email[z]);
            }else {
                printf("we didn't found it \n");
            }
            r++;
            break;
        default:
            printf("value invalid !!");   
            break;
    }        
    
    }while(choix != 0);        
    
    }
    
    
