/*************2017.c**************
 * Source: HDU Online Judge 2017 *
 * Author: CHEN Shu              *
 *   Time: 2020/01/05            *
**********************************/

#include<stdio.h>

int main()
{
    int numLines, i;
    scanf("%d", &numLines);
    getchar();

    for (i = 0; i < numLines; i++) {
        char ch;
        int counter = 0;
        while ((ch = getchar()) != '\n') {
            if (ch >= '0' && ch <= '9')  counter++;
        }

        printf("%d\n", counter);
    }

    return 0;
}