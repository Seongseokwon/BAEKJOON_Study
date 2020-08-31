// 자연수 N이 주어졌을때 1부터 N까지 한줄에 하나씩 출력

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++)
        printf("%d\n", i);
    return 0;
}
