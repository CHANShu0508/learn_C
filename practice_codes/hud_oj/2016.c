/*************2016.c**************
 * Source: HDU Online Judge 2016 *
 * Author: CHEN Shu              *
 *   Time: 2020/01/05            *
**********************************/

#include<stdio.h>

#define MAX_LEN 100

int main()
{
    int length;
    while (1) {
        scanf("%d", &length);
        if (length == 0)  break;

        int sequence[MAX_LEN], i, minPoint = 0;
        for (i = 0; i < length; i++) {
            scanf("%d", &sequence[i]);
            if (sequence[i] < sequence[minPoint])  minPoint = i;
        }   // 初始化数组与最小值

        int swap = sequence[minPoint];
        sequence[minPoint] = sequence[0];
        sequence[0] = swap;

        for (i = 0; i < length; i++)  {
            printf("%d", sequence[i]);
            if (i == length - 1)  printf("\n");
            else printf(" ");
        }
    }

    return 0;
}