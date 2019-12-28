/*************2002.c**************
 * Source: HDU Online Judge 2000 *
 * Author: CHEN Shu              *
 *   Time: 2019/12/28            *
**********************************/

#include<stdio.h>
#include<math.h>

#define PI 3.1415927

int main()
{
    double radius, volume;
    while (scanf("%lf", &radius) != EOF) {
        getchar();

        volume = (4.0 / 3) * PI * pow(radius, 3);
        printf("%.3f\n", volume);
    }

    return 0;
}