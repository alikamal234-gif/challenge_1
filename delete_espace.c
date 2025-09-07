#include<stdio.h>

int main()
{
    int i =0;
    char x[24]="hello world how are you.";
    /*
    while(x[i] != '\0'){
        while(x[i] != '\n'){
            printf("%c",x[i]);
            i++;
            
            }
            break;
        printf("\n");    
    }
    */
    for(int i =0; i < strlen(x) ;i++){
        if(x[i] != ' '){
            printf("%c",x[i]);
        }else{
            printf("\n");
        }
    }
    
    return 0;
}
