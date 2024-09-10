#include <stdio.h>

int main()
{
    printf("\"전경은\"의 출석점수 계산\n");
    printf("-------------------------\n");

    float c = (58. / 60) * 100;
    float d = 14.5;
    printf("수업시간\t%d시간\n", 60);
    printf("결석시간\t%d시간\n", 2);
    printf("출석률\t\t%.1f%%\n", c);
    printf("출석점수\t%.1f점\n", d);

}


