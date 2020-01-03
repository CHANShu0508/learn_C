/*************2009.c**************
 * Source: HDU Online Judge 2000 *
 * Author: CHEN Shu              *
 *   Time: 2020/01/03            *
**********************************/

#include<stdio.h>
#include<math.h>

int main()
{
    int numInit, numSeq;
    
    while((scanf("%d %d", &numInit, &numSeq)) != EOF) {
        getchar();

        double result = 1.0 * numInit, numPlus = result;
        int i;
        for (i = 1; i < numSeq; i++) {
            numPlus = pow(numPlus, 0.5);
            result += numPlus;
        }

        printf("%.2f\n", result);
    }

    return 0;
}