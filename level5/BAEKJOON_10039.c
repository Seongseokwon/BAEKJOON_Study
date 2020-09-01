// 학생 5명의 점수가 주어졌을 때 5명의 평균을 구하시오
// 만약 학생의 점수가 40점 미만이라면 40점으로 대체

#include <stdio.h>

int main()
{
    int N;
    int score, total;
    int i;

    score = 0;
    i = 0;
    while (i < 5)
    {
        scanf("%d",&N);
        if(N < 40)
            N = 40;
        score = N;
        total += score;
    }
    return 0;
}
