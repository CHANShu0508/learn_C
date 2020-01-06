/*************2018.c**************
 * Source: HDU Online Judge 2018 *
 * Author: CHEN Shu              *
 *   Time: 2020/01/05            *
**********************************/

#include<stdio.h>

#define MAX_LEN 101

void change(int sequence[], int n, int len, int add);

int main()
{
    int sequenceLen, numAdd, i;
    while (1) {
        scanf("%d %d", &sequenceLen, &numAdd);
        if (sequenceLen == 0 && numAdd == 0)  break;

        int sequence[MAX_LEN] = {0}, judgeSeq[MAX_LEN] = {0}, larger = 0;
        for (i = 0; i < sequenceLen; i++) {
            scanf("%d", &sequence[i]);
            if (sequence[i] > numAdd)       {judgeSeq[i] = 1; larger++;}
            else if (sequence[i] == numAdd) {judgeSeq[i] = 0;}
            else                            {judgeSeq[i] = -1;}
        }

        int aimPoint;
        for (i = 0; i < sequenceLen; i++) {
            if (judgeSeq[i] == 0)       {aimPoint = i; break;}
            else if (larger == sequenceLen || larger == 0) {
                if (judgeSeq[i] == 1)   {aimPoint = 0; break;}
                else                    {aimPoint = sequenceLen - 1; break;}
            } else if ((judgeSeq[i] == 1 && judgeSeq[i - 1] == -1) || (judgeSeq[i] == -1 && judgeSeq[i - 1] == 1)) {
                aimPoint = i;
            }
        }

        change(sequence, aimPoint, sequenceLen, numAdd);

        for (i = 0; i <= sequenceLen; i++) {
            printf("%d", sequence[i]);
            if (i == sequenceLen)  printf("\n");
            else                   printf(" ");
        }
    }

    return 0;
}

void change(int sequence[], int n, int len, int add)
{
    int i;
    for (i = len; i > n; i--) {
        sequence[i] = sequence[i - 1];
    }

    sequence[n] = add;
}