#include <stdio.h>

int main()
{
    int N;
    int line;

    line = 0;
    scanf("%d", &N);
    line = 2 * N -1;

    for(int i =0; i < N; i++)
    {
        for(int j = 0; j < i; j++)
            printf(" ");
        for(int j = 0; j< line -2 *i;j++)
            printf("*");
        printf("\n");
    }
    for(int i = 1; i < N; i++)
    {
        for(int j = N - 1; j > i; j--)
            printf(" ");
        for(int j = 0; j < 2*i+1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
