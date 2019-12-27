/*********************************
 * Source: HDU Online Judge 2000 *
 * Author: CHEN Shu              *
 *   Time: 2019/12/27            *
**********************************/

#include<stdio.h>

#define CORRECT_ORDER 1
#define REVERSE_ORDER 0

#define ALPHAS_IN_ONE_LINE 3

int main()
{
    char alpha[ALPHAS_IN_ONE_LINE], n;   // 对应一行的三个字母和暂存使用的变量n
    int i, order;
    while(1) {
        if ((alpha[0] = getchar()) == EOF) {
            break;
        }
        for (i = 1; i < ALPHAS_IN_ONE_LINE; i++) {
            alpha[i] = getchar();
        }
        getchar();  // 把一行所有的字符（包括换行）全部吃掉

        if (alpha[0] < alpha[1]) {
            order = CORRECT_ORDER;
            if (alpha[1] < alpha[2]) {
                ;   /* empty body */
            } else if (alpha[2] < alpha[0]) {
                n = alpha[0];
                alpha[0] = alpha[2];
                alpha[2] = alpha[1];
                alpha[1] = n;
            } else {
                n = alpha[1];
                alpha[1] = alpha[2];
                alpha[2] = n;
            }
        } else {
            order = REVERSE_ORDER;
            if (alpha[1] > alpha[2]) {
                ;   /* empty body */
            } else if (alpha[2] > alpha[0]) {
                n = alpha[0];
                alpha[0] = alpha[2];
                alpha[2] = alpha[1];
                alpha[1] = n;
            } else {
                n = alpha[1];
                alpha[1] = alpha[2];
                alpha[2] = n;
            }
        }
        
        if (order == CORRECT_ORDER) {
            for (i = 0; i < ALPHAS_IN_ONE_LINE; i++) {
                printf("%c", alpha[i]);
                if (i == 2) {
                    printf("\n");
                } else {
                    printf(" ");
                }
            }
        } else if (order == REVERSE_ORDER) {
            for (i = ALPHAS_IN_ONE_LINE - 1; i >= 0; i--) {
                printf("%c", alpha[i]);
                if (i == 0) {
                    printf("\n");
                } else {
                    printf(" ");
                }
            }
        }
    }
    return 0;
}