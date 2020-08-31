// Ex => 26이 주어졌을때 2 + 6 = 8
// 새수는 68 => 6 + 8 = 14
// 새수는 84 => 8 + 4 = 12
// 새수는 42 => 4 + 2 = 6
// 새수는 26 총 4사이클

#include <stdio.h>

int number_check(int num)
{
    int newN;
    int ten, one, res;
    int cnt =0;

    if(num < 10)
    {
        ten = 0;
        one = num % 10;
        res = ten + one;
        newN = one + res % 10;
    }
    else
    {
        ten = num / 10;
        one = num % 10;
        res = ten + one;
        newN = one + res % 10;
    }

    if (num != newN)
    {
        cnt++;
        number_check(newN);
    }
    else
    {
        return cnt;
    }
}

int main()
{
    int i;
    int N;
    int ten, one,res;
    i = 0;
    scnaf("%d", &N);

    while (1)
    {
        if (N < 10)
        {
            ten = 0;
            one = N;
            res = ten + one;
        }
        i++;
    }
    return 0;
}
