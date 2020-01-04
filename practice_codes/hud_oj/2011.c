/*************2011.c**************
 * Source: HDU Online Judge 2011 *
 * Author: CHEN Shu              *
 *   Time: 2020/01/04            *
**********************************/

#include<stdio.h>

double compute(int number);

int main()
{
    int m, i;

    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        int read;
        double result;
        scanf("%d", &read);
        result = compute(read);

        printf("%.2f\n", result);
    }

    return 0;
}

double compute(int number)
{
    int i;
    double j = 1.0, result = 0;
    for (i = 1; i <= number; i++) {
        if (i % 2 == 1) result += j / (i * 1.0);
        else            result -= j / (i * 1.0);
    }

    return result;
}