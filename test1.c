#include <stdio.h>
int main(){
    // challenge 1 : condition 1 pair impair
    int number;
    while(1){
        printf("enter number : ");
        scanf("%d",&number);
        if (number % 2 == 0){
            printf("yout number is pair\n");
        }else {
            printf("your number is impaire\n");
        }
    }
}