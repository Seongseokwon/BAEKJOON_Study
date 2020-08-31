//알람시간을 입력 받고 그것 보다 45분 빠른 시간을 구하기

#include <stdio.h>

int main()
{
    int H, M;
    scanf("%d %d", &H, &M );

    if(H == 0)
    {
        H = 23;
        M = 15 + M;
    }
    else
    {
        H = H -1;
        M = 15 + M;
    }

    printf("%d %d",H, M);
    return 0;
}
