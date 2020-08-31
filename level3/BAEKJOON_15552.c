//첫줄에 테스트케이스의 개수가주어지고
//그 개수만큼 A,B를 입력받아서 A+B를 출력하시오

#include <stdio.h>

int main()
{
    int T;
    int A, B;
    int result[100000] ={0,};

    scanf("%d", &T);

    int i;
    for (i = 0; i < T; i++)
    {
        scanf("%d %d", &A, &B);
        result[i] = A+B;
    }
    for (i = 0; i < T; i++)
    {
        printf("%d\n", result[i]);
    }
    return 0;
}
