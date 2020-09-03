//자연수 10개를 입력받은후 이를 42로 나눈 나머지를 구한다
//그 나머지가 서로 다른값이 몇개인지 출력하는 프로그램

#include <stdio.h>

int main()
{
    int num[10]={0,};
    int mod[50]={0,};
    int i,index, cnt;

    i = 0;
    cnt = 0;
    while(i < 10)
    {
        scanf("%d", &num[i]);
        index= num[i] % 42;
        mod[index]++;
        i++;
    }
    i = 0;
    while (i < 50)
    {
        if(mod[i] !=0)
            cnt++;
        i++;
    }
    printf("%d", cnt);
    return 0;
}
