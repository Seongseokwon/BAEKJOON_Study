#include <stdio.h>

int main()
{
    int T;
    int res[100] = {0,};
    int A[100]={0,};
    int B[100]={0,};

    scanf("%d", &T);
    for(int i =0; i < T; i++)
    {
        scanf("%d %d", &A[i], &B[i]);
    }
    for(int i =0; i< T; i++)
    {
        printf("Case #%d: %d + %d = %d\n",i+1, A[i], B[i], A[i]+B[i]);
    }
    return 0;
}
