#include<stdio.h>
#include<string.h>
int main()
{
    int i = 0;
    char x[400] = "hello world";
    int lengh = strlen(x);
    for(int i = lengh -1; i>=0;i-- ){
        printf("%c",x[i]);
    }
    
}
