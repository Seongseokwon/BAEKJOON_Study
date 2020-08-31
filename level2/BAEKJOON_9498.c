// 점수를 입력받아 90 ~ 100 => A, 80~89 => B
// 70 ~79 => C, 60 ~ 69 => D 나머지 F

#include <stdio.h>

int main()
{
    int score;
    scanf("%d", &score);

    if (score >= 90)
        printf("A");
    else if (score >= 80)
        printf("B");
    else if (score >= 70)
        printf("C");
    else if (score >= 60)
        printf("D");
    else
        printf("F");

    return 0;
}
