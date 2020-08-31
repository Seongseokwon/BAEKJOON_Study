// A와 B를 입력받다가 0 0 이 들어오면 종료

#include <stdio.h>

int main()
{
    int A,B;
    int res[100]= {0,};
    int i,j;
    i = 0;
    while (1)
    {
        scanf("%d %d", &A, &B);
        res[i] = A + B;
        if( A == 0 && B == 0)
            break;
        i++;
    }
    j = 0;
    while(j < i)
    {
        printf("%d\n", res[j]);
        j++;
    }
    return 0;
}
