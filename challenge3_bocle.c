#include <stdio.h>
int main(){
    int chose;
    int sum=0;
    printf("chose number : ");
    scanf("%d",&chose);
    for(int i = 1 ; i < chose ; i++){
        printf("%d + ",i);
        sum = sum +i;
        
        }
    printf("%d",chose);
    printf("= %d",sum);
}