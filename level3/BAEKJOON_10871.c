// N개의 정수로 이루어진 수열 A 에서
// X보다 작은 수를 모두 출력하는 프로그램을 작성하시오

#include <stdio.h>

int main()
{
    int N,X;
    scanf("%d %d", &N, &X);
    int i;
    int arr[10000]={0,};
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < X)
            printf("%d ", arr[i]);
    }

    return 0;
}
