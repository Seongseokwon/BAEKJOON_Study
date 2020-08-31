//첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별N개 찍기

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N ; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(j< N-i-1)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
