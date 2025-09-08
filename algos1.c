#include<stdio.h>
#include<string.h>
int main()
{
    int arrays[6] = {5,8,1,9,3,7};
    for(int j = 0; j<6;j++){
    for(int i = 0 ; i <6; i++){
        if(arrays[i]<arrays[i+1]){
            int s = arrays[i];
            arrays[i]=arrays[i+1];
            arrays[i+1]=s;
        }
    }
    }
    for(int j = 0;j<=6;j++){
        printf("%d - ",arrays[j]);
    }

}