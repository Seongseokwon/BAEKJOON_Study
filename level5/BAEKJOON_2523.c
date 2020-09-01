// 출력결과와 같은 별 모양 찍기

#include <stdio.h>

int main()
{
    int N;
    int i,j;
    int line;

    i = 0;
    line = 0;

    scanf("%d", &N);
    line = 2 * N -1;

    while (i < line)
    {
        if (i > N - 1)
        {
            j = 0;
            while (j < line - i)
            {
                printf("*");
                j++;
            }
            printf("\n");
        }
        else
        {
            j = 0;
            while (j < i +1)
            {
                printf("*");
                j++;
            }
            printf("\n");
        }
        i++;
    }
    return 0;
}
