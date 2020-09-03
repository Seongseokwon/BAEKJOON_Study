#include <stdio.h>

int main()
{
    int tcase;
    int i,j;
    char OX[80];
    int sum, total;

    scanf("%d", &tcase);

    i = 0;
    while (i < tcase)
    {
        scanf("%s", OX);
        j = 0;
        while (OX[j] != '\0')
        {
            if (OX[j] == 'O')
            {
                sum += 1;
                total += sum;
            }
            else
                sum = 0;
            j++;
        }
        printf("%d\n",total);
        sum = 0;
        total = 0;
        j = 0;
        i++;
    }

    return 0;
}
