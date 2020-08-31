//연도가 주어졌을때 윤년이면 1, 아니면 0
//윤년은 연도가 4의 배수이면서 100의 배수가 아닐때 또는
//400의 배수 일떄 이다.

#include <stdio.h>

int main()
{
    int year;

    scanf("%d", &year);

    if((year % 4 ==0)
        && ((year % 100 != 0) || (year % 400 == 0) ))
        printf("1");
    else
        printf("0");

    return 0;
}
