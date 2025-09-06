#include<stdio.h>
#include<string.h>
int main()
{
    
    char letter[50]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m',' ','\0'};
    char letter_cptl[50]={'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M',' ','\0'};
    char number[10] = {'1','2','3','4','5','6','7','8','9','0'};
    char text[20];
    
    printf("enter text : ");
    fgets(text,100,stdin);
    for(int i = 0; i<sizeof(text);i++){
        for(int j = i;j<sizeof(letter);j++){
            if(text[i] == letter[j] && text[i] != number[i]){
                text[i] = letter_cptl[j];
                printf("%c",text[i]);
                
            }
            else {
                printf("%c",text[i]);
                break;
            }
    }
}
}
