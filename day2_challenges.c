#include <stdio.h>

int main(){
    int x;
    
    
    printf("how much number do you want to calcule : ");
    scanf("%d",&x);
    int somme[x];
    int calcule= 0;
    for(int i = 0 ; i < x ; i++){
        printf("number %d : ",i+1);
        scanf("%d",&somme[i]);
        calcule = calcule + somme[i];
        printf("%d\n",calcule);
    }
   return 0;
}