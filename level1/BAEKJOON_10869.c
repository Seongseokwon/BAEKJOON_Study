//두 자연수 A와 B가 주어질때
//A+B, A-B, A*b, A/B(몫), A%B(나머지)를 출력하는 프로그램 구현

#include <stdio.h>

int main()
{
    int A,B;
    int sum, minus, mul, div, mod;

    scanf("%d %d", A, B);
    sum = A + B;
    minus = A - B;
    mul = A * B;
    div = A / B;
    mod = A % B;

    printf("%d\n", sum);
    printf("%d\n", minus);
    printf("%d\n", mul);
    printf("%d\n", div);
    printf("%d", mod);

    return 0;
}
