// Ex => 26이 주어졌을때 2 + 6 = 8
// 새수는 68 => 6 + 8 = 14
// 새수는 84 => 8 + 4 = 12
// 새수는 42 => 4 + 2 = 6
// 새수는 26 총 4사이클

#include <stdio.h>

int main()
{
    int i;
    int N;
    int ten, one, hap;
    i = 0;
    scanf("%d", &N);
    int newNum;
    newNum = N;
    while (1)
    {
        ten = newNum / 10;
        one = newNum % 10;
        hap = ten + one;
        newNum = one*10 + (hap % 10);
        i++;
        printf("%d + %d = %d 새수 : %d \n", ten, one, hap, newNum);
        if(newNum == N)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}
