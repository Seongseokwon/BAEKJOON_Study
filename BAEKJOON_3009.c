#include <stdio.h>

int main(void)
{
    int arr[4][2]={0,};
    int i,j;

    i = 0;
    while (i < 3)
    {
        j =0;
        while (j < 2)
        {
            scanf("%d", &arr[i][j]);
            j++;
        }
        i++;
    }
    arr[3][0] = arr[0][0];
    arr[3][1] = arr[1][1];

    printf("%d %d", arr[3][0], arr[3][1]);

    return 0;
}
