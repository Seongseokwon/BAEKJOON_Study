//두 정수를 비교해서 A가 B보다 크면 >
//A 가 B 보다 작으면 <
//같은경우는 ==를 출력

#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    if (A > B)
        printf(">");
    if (A < B)
        printf("<");
    if (A == B)
        printf("==");

    return 0;
}
