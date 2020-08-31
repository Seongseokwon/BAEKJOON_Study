// 4분면중의 위치를 출력 하는 프로그램 작성하기

#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("1");
    else if (x < 0 && y > 0)
        printf("2");
    else if (x < 0 && y < 0)
        printf("3");
    else
        printf("4");
    return 0;
}
