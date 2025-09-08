#include<stdio.h>

int main()
{
    int i =0;
    char x[600];
    printf("text : ");
    fgets(x,sizeof(x),stdin);
    
    while(x[i] != '\0'){
           i++; 
    }
    printf("lenght of text is %d letter.",i-1);
}
