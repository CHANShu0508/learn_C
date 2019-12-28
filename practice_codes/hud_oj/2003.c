/*************2003.c**************
 * Source: HDU Online Judge 2000 *
 * Author: CHEN Shu              *
 *   Time: 2019/12/28            *
**********************************/

#include<stdio.h>
#include<math.h>

int main()
{
    double a;
    while (scanf("%lf", &a) != EOF) {
        getchar();
        a = fabs(a);
        printf("%.2f\n", a);
    }

    return 0;
}