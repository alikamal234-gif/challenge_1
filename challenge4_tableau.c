#include <stdio.h>

int main(){
    int how;
    
    printf("how much number : ");
    scanf("%d",&how);
    int compare[how];
    for(int k = 0 ; k < how ; k++){
        printf("number %d : ",k+1);
        scanf("%d",&compare[k]);
    }
    
    for(int i = 0; i < how;i++){
        
        for(int j = i+1; j<how;j++){
            int s ;
            if(compare[i] > compare[j]){
                s = compare[i];
                compare[i]=compare[j];
                compare[j]=s;
            }
            
        }
    }
    printf("%d",compare[0]);
}
// [3,5,2,1]