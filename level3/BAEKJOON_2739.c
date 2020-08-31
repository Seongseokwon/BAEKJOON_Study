// N 을 입력받은뒤 구구단 N단을 출력하는 프로그램을 작성하시오

#include <stdio.h>

int main()
{
    int i,N;
    N =0;
    i = 0;
    scanf("%d", &N);

    for(i = 1; i < 10; i++)
    {
        printf("%d * %d = %d\n", N, i, N*i);
    }
    return 0;
}
