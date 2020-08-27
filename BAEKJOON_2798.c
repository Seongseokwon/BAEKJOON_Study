#include <stdio.h>

int main()
{
    int N, M;
    int card[101]={0,};
    int total, max;
    int i;
    total = 0;
    scanf("%d %d", &N, &M);
    i = 0;
    max = 0;
    while (i <  N)
    {
        scanf("%d", &card[i]);
        i++;
    }
    int x, y, z;
    x = 0;
    while (x < N)
    {
        y = x + 1;
        while (y < N)
        {
            z = y + 1;
            while (z < N)
            {
                total = card[x] + card[y] + card[z];
                if(total <= M)
                   if(total >max)
                    max = total;
                z++;
            }
            y++;
        }
        x++;
    }
    printf("%d", max);
    return 0;
}
