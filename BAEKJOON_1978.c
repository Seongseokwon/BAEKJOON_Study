#include <stdio.h>

int prime_check(int num)
{
    int cnt;
    int i;

    cnt = 0;
    if(num < 2)
        cnt = 0;
    i = 2;
    while (i < num / i)
    {
        if(num % i == 0)
            cnt = 0;
        else
            cnt = 1;
        i++;
    }
    return cnt;
}

int main()
{
    int i;
    int N, num;
    int res;
    scanf("%d", &N);

    i = 0;
    res = 0;
    while (i < N)
    {
        scanf("%d", &num);
        if(prime_check(num) == 1)
            res++;
        i++;
    }
    printf("%d", res);
    return 0;
}
