/*************2006.c**************
 * Source: HDU Online Judge 2000 *
 * Author: CHEN Shu              *
 *   Time: 2020/01/03            *
**********************************/

#include<stdio.h>

int main()
{
    int n;  // 储存起始的数字
    int num;    // 每个数字与乘积

    while ((scanf("%d", &n)) != EOF) {
        int result = 1;
        for (int i = 0; i < n; i++) {
            scanf("%d", &num);
            if (num % 2 == 1) {
                result *= num;
            }
        } 

        getchar();

        printf("%d\n", result);
    }

    return 0;
}