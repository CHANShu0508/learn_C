/*************2015.c**************
 * Source: HDU Online Judge 2015 *
 * Author: CHEN Shu              *
 *   Time: 2020/01/04            *
**********************************/

#include<stdio.h>

int main()
{
    int sequenceLen, averageLen;
    while ((scanf("%d %d", &sequenceLen, &averageLen)) != EOF) {
        int numHead = 2, state = 0, average;
        while (1) {
            int numEnd = numHead + 2 * (averageLen - 1);
            if (numEnd >= sequenceLen * 2) {
                averageLen = (sequenceLen * 2 - numHead) / 2 + 1;
                state = 1;
            }

            average = numHead + averageLen - 1;
            printf("%d", average);
            if (state) {
                printf("\n");
                break;
            } else {
                printf(" ");
                numHead += 2 * (averageLen);
            }
        }
    }

    return 0;
}