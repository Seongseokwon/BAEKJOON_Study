#include <stdio.h>

int main(void)
{
    int N;
    int i =2, j =5, cnt =2;

    scanf("%d", &N);

    if (N == 1)
    {
        printf("%d",1);
        return (0);
    }
    while (1)
    {
        if(i <= N && N <= i + j)
        {
            printf("%d", cnt);
            break ;
        }
        i = i + j + 1;
        j += 6;
        cnt++;
    }

}
