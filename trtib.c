#include <stdio.h>

int main(){
    int tab[10];
    int much;
    scanf("%d",&much);
    for(int i = 0; i < 4 ; i++){
        printf("enter : ");
        scanf("%d",&tab[i]);
    }

    for(int j = 0; j < 4 ; j++){
        for(int k = j+1 ; k<4;k++)
        {
            if(tab[j]>tab[k])
            {
            int mai = tab[j];
            tab[j] = tab[k];
            tab[k] = mai;
             }
        }
        
    }
    for(int b =0;b<4;b++){
        printf("%d",tab[b]);
    }
}