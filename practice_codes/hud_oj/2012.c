/*************2012.c**************
 * Source: HDU Online Judge 2012 *
 * Author: CHEN Shu              *
 *   Time: 2020/01/04            *
**********************************/

#include<stdio.h>

int judgePrime(int number);

int main()
{
    int numInit, numEnd;
    while (1) {
        scanf("%d %d", &numInit, &numEnd);
        if (numEnd == 0 && numInit == 0) break;

        int i, numCompute, j = 0;
        for (i = numInit; i <= numEnd; i++) {
            numCompute = i * (i + 1) + 41;
            if (judgePrime(numCompute)) j++;
        }

        if (j == numEnd - numInit + 1)  printf("OK\n");
        else                            printf("Sorry\n");
    }

    return 0;
}

int judgePrime(int number)
{
    if (number == 1 || number == 0) return 0;

    int i;
    for (i = 2; i < number; i++) {
        if (number % i == 0) return 0;
    }

    return 1;
}