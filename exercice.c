#include <stdio.h>

int main(){
    int totale;
    
    printf("\n+ 1_champeau :        50 DH\n+ 2_laptop :       2000 DH\n+ 3_telephone :      1000 DH \n+ 4_airpots :       100 DH\n\n");
    // printf("quelles la total des produits : ");
    // scanf("%d",totale);
    // int produite[4];
    // for(int i = 0; i <= 4 ; i++){
    //     printf("produits %d :",i+1);
    //     scanf("%d",&produite[i]);
    // }
    // int prixlist[4];
    // int prixlist[0] = 50 - (50*produite[0])/100; 
    // int prixlist[1] = 2000 - (2000*produite[1])/100; 
    // int prixlist[2] = 1000 - (1000*produite[2])/100; 
    // int prixlist[3] = 100 - (100*produite[3])/100; 
    // int somme = 0;
    // for(int j = 0; j<=4; j++){
    //     if(produite[j] > 1){
    //     printf("%d",prixlist[j]);
    //     somme += produite[j];
    // }
    // }
    
    // printf("%d",somme);
    int prod1 = 50;
    int prod2 = 2000;
    int prod3 = 1000;
    int prod4 = 100;
    
    int produite[100];
    for(int i = 0; i < 4; i++){
        printf("how mush produite in %d : ",i+1);
        scanf("%d",&produite[i]);
    }
    int prix1 = prod1 - (prod1*produite[0])/100;
    int prix2 = prod2 - (prod2*2*produite[1])/100;
    int prix3 = prod3 - (prod3*2*produite[2])/100;
    int prix4 = prod4 - (prod4*2*produite[3])/100;
    
    int somme = prix1+prix2+prix3+prix4;
    printf("montant total est : %d dhs", somme);
    
}