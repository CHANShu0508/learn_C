/*************2018.c**************
 * Source: HDU Online Judge 2018 *
 * Author: CHEN Shu              *
 *   Time: 2020/01/05            *
**********************************/

#include<stdio.h>

#define MAX_NUM 10000
int main()
{
    int numYear;
    while (1) {
        scanf("%d", &numYear);
        if (numYear == 0) break;

        int sheep[MAX_NUM] = {4}, numSheep = 1, i, j;
        for (i = 1; i < numYear; i++) {
            int numPlus = 0;
            for (j = 0; j < numSheep; j++) {
                if (sheep[j] > 3) numPlus++;
            }

            for (j = numSheep; j < numSheep + numPlus; j++) {
                sheep[j] = 1;
            }

            numSheep += numPlus;

            for (j = 0; j < numSheep; j++) {
                sheep[j]++;
            }
        }

        printf("%d\n", numSheep);
    }

    return 0;
}