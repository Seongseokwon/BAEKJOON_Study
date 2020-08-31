#include <stdio.h>

int main()
{
    int T;
    int res[100] = {0,};
    int A,B;
    scanf("%d", &T);
    for(int i =0; i < T; i++)
    {
        scanf("%d %d", &A, &B);
        res[i]= A+B;
    }
    for(int i =0; i< T; i++)
    {
        printf("Case #%d: %d\n",i+1,res[i]);
    }
    return 0;
}
