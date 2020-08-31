// n이 주어졌을때 1부터 n까지의 합을 구하는 프로그램을 작성하시오

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int total;
    total = 0;

    for(int i =1; i<= n; i++)
        total += i;
    printf("%d", total);
    return 0;
}
