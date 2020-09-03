//평균을 구하는 프로그램을 작성한다.
//이때 평균을 구하는 공식은
// (모든 과목의 합) / (과목중 최고점) * 100 이다.

#include <stdio.h>

int main()
{
    int subject, i, max;
    float score[1001] = {0,};
    float res;

    res = 0;
    scanf("%d", &subject);
    max = 0;
    i = 0;
    while (i < subject)
    {
        scanf("%f", &score[i]);
        if (score[i] > max)
            max = score[i];
        i++;
    }
    i = 0;
    while (i < subject)
    {
        score[i] = score[i] / max *100;
        res += score[i];
        i++;
    }
    res = res / subject;
    printf("%.2f",res);
    return 0;
}
