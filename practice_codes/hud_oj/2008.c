/*************2008.c**************
 * Source: HDU Online Judge 2000 *
 * Author: CHEN Shu              *
 *   Time: 2020/01/03            *
**********************************/

#include<stdio.h>

int main()
{
    int head;

    while (1) {
        scanf("%d", &head);
        if (head == 0) break;
        int numNega = 0, numZero = 0, numPosi = 0;
        double read;

        for (int i = 0; i < head; i++) {
            scanf("%lf", &read);
            if (read < 0)       numNega++;
            else if (read == 0) numZero++;
            else                numPosi++;
        }
        getchar();

        printf("%d %d %d\n", numNega, numZero, numPosi);
    }

    return 0;
}