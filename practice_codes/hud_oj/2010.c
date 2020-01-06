/*************2010.c**************
 * Source: HDU Online Judge 2000 *
 * Author: CHEN Shu              *
 *   Time: 2020/01/03            *
**********************************/

#include<stdio.h>

int judge(int i);

int main()
{
    int numInit, numFinal;

    while ((scanf("%d %d", &numInit, &numFinal)) != EOF) {
        int i, j = 0;
        for (i = numInit; i <= numFinal; i++) {
            if (judge(i) == 1) {
                if (j != 0) printf(" ");
                printf("%d", i);
                j++;
            }
        }
        if (j == 0) printf("no");
        printf("\n");
    }

    return 0;
}

int judge(int i)
{
    int j, numCompute = 0, digitDivide = 10, terminal = i;
    for (j = 0; j < 3; j++) {
        numCompute += (i % digitDivide) * (i % digitDivide) * (i % digitDivide);
        i = (i - (i % digitDivide)) / 10;
    }
    if (numCompute == terminal) return 1;
    else return 0;
}