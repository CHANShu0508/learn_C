/*************2014.c**************
 * Source: HDU Online Judge 2014 *
 * Author: CHEN Shu              *
 *   Time: 2020/01/04            *
**********************************/

#include<stdio.h>

int main()
{   
    int n;
    while ((scanf("%d", &n)) != EOF) {
        int pointMin = 101, pointMax = 0, sum = 0, read, i;
        double result;
        for (i = 0; i < n; i++) {
            scanf("%d", &read);
            sum += read;
            if (read > pointMax) pointMax = read;
            if (read < pointMin) pointMin = read;
        }

        sum -= (pointMin + pointMax);
        result = sum * 1.0 / (n - 2);

        printf("%.2f\n", result);
    }

    return 0;
}