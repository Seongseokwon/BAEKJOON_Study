#include <stdio.h>

int main()
{
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);

    int result;

    result = (V - B - 1) / (A - B) +1;
    printf("%d",result);
    return 0;
}

