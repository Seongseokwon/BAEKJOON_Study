// 3자리 정수 A, B가 주어졌을때
// one => A * B의 1의 자리
// two => A * B의 10의 자리
// three => A * B 의 100의 자리
// four => 결과 출력하기
#include <stdio.h>

int main()
{
    int A,B;
    int one, two, three, four;

    scanf("%d %d",&A, &B);
    one = A * (B % 10);
    two = A * (B / 10 % 10);
    three = A * (B / 10 / 10);
    four = A * B;

    printf("%d\n", one);
    printf("%d\n", two);
    printf("%d\n", three);
    printf("%d\n", four);
    return 0;
}
