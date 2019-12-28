/*************2005.c**************
 * Source: HDU Online Judge 2000 *
 * Author: CHEN Shu              *
 *   Time: 2019/12/28            *
**********************************/
#include<stdio.h>

int main()
{
    int year, month, day, i, tot = 0;
    char a, b;
    while (scanf("%d%c%d%c%d", &year,&a, &month, &b, &day) != EOF) {
        getchar();

        for (i = 1; i < month; i++) {
            switch (i) {
                case 1:     tot += 31; break;
                case 2:     if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) tot += 29; 
                            else tot += 28; break;
                case 3:     tot += 31; break;
                case 4:     tot += 30; break;
                case 5:     tot += 31; break;
                case 6:     tot += 30; break;
                case 7:     tot += 31; break;
                case 8:     tot += 31; break;
                case 9:     tot += 30; break;
                case 10:    tot += 31; break;
                case 11:    tot += 30; break;
            }
        }

        tot += day;

        printf("%d\n", tot);
        tot = 0;
    }

    return 0;
}