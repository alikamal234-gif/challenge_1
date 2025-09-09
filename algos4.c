#include <stdio.h>
#define chose 3
#define num_arr 6

int main()
{
    int arrays[num_arr] = {5, 8, 1, 9, 3, 7};
    int mini[num_arr];
    int max[num_arr];

    for (int i = 0; i < chose; i++)
    {
        mini[i] = arrays[i];
    }
    for (int i = chose; i < num_arr; i++)
    {
        mini[i] = arrays[i];
    }
    for (int p = 0; p < num_arr; p++)
        for (int k = p + 1; k < num_arr; k++)
        {
            if (mini[p] < mini[k])
            {
                int t = mini[p];
                mini[p] = mini[k];
                mini[k] = t;
            }
            
            if (mini[p + chose] < mini[chose + k])
            {
                int t = mini[chose + p];
                mini[chose + p] = mini[chose + k];
                mini[chose + k] = t;
            }
        }
    for (int y = 0; y < num_arr; y++)
    {
        printf("%d - ", mini[y]);
    }
    printf("%d - ", mini[chose]);

    for (int y = 0; y < num_arr; y++)
    {
        printf("%d - ", max[y]);
    }
}