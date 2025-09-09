#include <stdio.h>

int main()
{
    int arrays[6] = {5, 8, 1, 9, 3, 7};

    for (int i = 0; i < 6; i++)
    {
        int s = arrays[i];
        for (int q = i + 1; q < 6; q++)
        {
            for (int j = q + 1; j < 6; j++)
            {
                if (arrays[q] < arrays[j])
                {
                    int k = arrays[q];
                    arrays[q] = arrays[j];
                    arrays[j] = k;
                }
                else
                {
                    continue;
                }
            }
        }
        if (arrays[i] < arrays[i + 1])
        {
            int d = arrays[i];
            arrays[i] = arrays[i + 1];
            arrays[i + 1] = d;
        }
        else
        {
            continue;
        }
    }

    for (int j = 0; j < 6; j++)
    {
        printf("%d - ", arrays[j]);
    }
}
