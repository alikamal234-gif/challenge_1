#include <stdio.h>

int main(){
    int number;
    printf("number of multiplication : ");
    scanf("%d",&number);
    for (int i = 0 ; i <= 10 ; i++){
        int result = number * i;
        printf(" %d * %d = %d\n",number,i,result);
    }
}