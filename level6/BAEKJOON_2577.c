// A,B,C 세 수를 입력받아서 세수를 곱한 결과 값에
//0~9 사이의 숫자가 몇번씩 사용 되었는지 출력하기

#include <stdio.h>

int main()
{
    int A,B,C;
    int res, index;
    int i;
    res = 0;
    index = 0;
    int num[10]={0,}; //배열에 숫자가 사용될때 ++해줌으로써 갯수체크
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    res = A * B * C;

    while (res > 0)
    {
        index = res % 10;
        num[index]++;
        res = res / 10;
    }
    i = 0;
    while(i < 10)
    {
        printf("%d\n",num[i]);
        i++;
    }

    return 0;
}
