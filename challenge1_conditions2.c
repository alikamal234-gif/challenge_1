#include <stdio.h>

int main(){
    int revenu;
    int score;
    int duree_pret;
    printf("entrez ton Revenu : ");
    scanf("%d",&revenu);
    printf("entrez ton score : ");
    scanf("%d",&score);
    printf("entrez ton durée du prét : ");
    scanf("%d",&duree_pret);


    if(revenu >= 30000 && score >= 700 && duree_pret <= 10){
        printf("éligible !!");
    }else if(revenu >= 30000 && score >= 650 && duree_pret <= 15){
        printf("éligible avec conditions !!");
    }else if (revenu < 30000 && score >= 650 && duree_pret > 15){
        printf("non éligible !!");
    }
}


// Écrivez un programme C qui évalue l'éligibilité pour un prêt en fonction de :

// Revenu annuel (en euros)
// Score de crédit (sur 1000)
// Durée du prêt (en années)
// Les conditions pour l'éligibilité sont :

// Revenu >= 30 000 € et Score de crédit >= 700 et Durée du prêt <= 10 ans : Éligible
// Revenu >= 30 000 € et Score de crédit >= 650 et Durée du prêt <= 15 ans : Éligible avec conditions
// Revenu < 30 000 € ou Score de crédit < 650 ou Durée du prêt > 15 ans : Non éligible
// Affichez un message en fonction de l'éligibilité.