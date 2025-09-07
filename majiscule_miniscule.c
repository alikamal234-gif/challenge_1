#include<stdio.h>

int main()
{
    int j=0;
    char x[200];
    printf("text : ");
    fgets(x,sizeof(x),stdin);
    while(x[j] != '\0'){
        if(x[j] <= 61 || x[j] >= 80){
        //majiscule(x,j);
        printf("%c",x[j] - 32);
        j++;
        
    }else if(x[j] >= 41 || x[j] <= 60){
        //miniscule(x,j);
        printf("%c",x[j] + 32);
        j++;
    }else{
        printf(" hhh ");
    }
    }
    
    return 0;
}
