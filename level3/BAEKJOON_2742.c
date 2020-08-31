// N이주어졌을때 N부터 1까지 출력하시오

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for(int i=N; i>0; i--)
        printf("%d", i);
    return 0;
}
