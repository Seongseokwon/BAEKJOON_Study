#include <stdio.h>

int main()
{
    int i,N;
    int num, min, max;
    i = 0;

    min = 10000001;
    max = -1000000;
    scanf("%d", &N);
    while(i < N)
    {
        scanf("%d", &num);
        if(num > max)
            max = num;
        if(num < min)
            min = num;
        i++;
    }

    printf("%d %d", min, max);
    return 0;
}
