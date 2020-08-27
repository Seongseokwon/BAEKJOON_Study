#include <stdio.h>

int main(void)
{
    int arr[4][2]={0,};
    int i,j;
    int x,y;

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
    if (arr[0][0] == arr[1][0])
        x = arr[2][0];
    else if (arr[1][0] == arr[2][0])
        x = arr[0][0];
    else
        x = arr[1][0];

    if (arr[0][1] == arr[1][1])
        y = arr[2][1];
    else if (arr[1][1] == arr[2][1])
        y = arr[0][1];
    else
        y = arr[1][1];


    return 0;
}
