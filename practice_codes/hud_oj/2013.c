/*************2013.c**************
 * Source: HDU Online Judge 2013 *
 * Author: CHEN Shu              *
 *   Time: 2020/01/04            *
**********************************/

#include<stdio.h>

int main()
{
    int numDay;
    while ((scanf("%d", &numDay)) != EOF) {
        getchar();
        int n = 1, i;
        for (i = 1; i < numDay; i++) {
            n = (n + 1) * 2;
        }

        printf("%d\n", n);
    }

    return 0;
}