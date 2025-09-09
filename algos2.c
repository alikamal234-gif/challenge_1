#include <stdio.h>

int main(){
    int arrays[6] = {5,8,1,9,3,7};

    for (int j = 0; j < 6; j++)
    {
        for (int i = j+1; i < 6; i++)
        {
            if (arrays[j] < arrays[i])
            {
                int s = arrays[j];
                arrays[j] = arrays[i];
                arrays[i] = s;
            }
        }
    }
    for (int j = 0; j <= 6; j++)
    {
        printf("%d - ", arrays[j]);
    }
}
