//A,B,C가 주어질때
//첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C) + (B%C))%C,
//셋째 줄에 (A×B)%C, 넷째 줄에 ((A%C) × (B%C))%C를 출력한다.

#include <stdio.h>

int main()
{
    int A,B,C;
    int one,two,three,four;

    scanf("%d %d %d", &A,&B,&C);
    one = (A+B)%C;
    two = ((A%C)+(B%C))%C;
    three = (A*B)%C;
    four = ((A%C) * (B%C))%C;

    printf("%d\n",one);
    printf("%d\n",two);
    printf("%d\n",three);
    printf("%d",four);
    return 0;
}
