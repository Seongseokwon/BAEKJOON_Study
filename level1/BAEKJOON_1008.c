//두 실수 A,B를 입력받은 다음 A / B를 출력하는 프로그램 작성

#include <stdio.h>

int main()
{
    double A,B;
    double result;
    scanf("%lf %lf", &A, &B);

    result = A / B;
    printf("%.9lf", result);
    return 0;
}
