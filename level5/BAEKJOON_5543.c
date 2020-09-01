#include <stdio.h>

int main()
{
    int minBugger;
    int minBeverage;
    int price, i, total;
    total = 0;
    minBugger = 2001;
    minBeverage = 2001;
    i = 0;
    while (i < 5)
    {
        scanf("%d", &price);
        if (i < 3)
            if (price < minBugger)
                minBugger = price;
        if (i < 5)
            if (price < minBeverage)
                minBeverage = price;
        i++;
    }
    total = minBugger + minBeverage -50;
    printf("%d", total);
    return 0;
}
