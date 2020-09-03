// 9개의 서로다른 자연수가 주어질때 이들중
//최댓값과 그 위치를 찾는 프로그램 작성

#include <stdio.h>

int main()
{
    int i,N;
    int num[9]= {0,};
    int max, cnt;

    i = 0;
    N =  9;
    cnt = 0;
    max = 0;
    while (i < N)
    {
        scanf("%d", &num[i]);
        if(i == 0)
            max = num[i];
        if(i >= 0)
            if(num[i] > max)
            {
                max = num[i];
                cnt = i;
            }
        i++;
    }
    printf("%d\n",max);
    printf("%d", cnt+1);
    return 0;
}
