/*************2004.c**************
 * Source: HDU Online Judge 2000 *
 * Author: CHEN Shu              *
 *   Time: 2019/12/28            *
**********************************/

#include<stdio.h>

int main()
{
    int score;
    while (scanf("%d", &score) != EOF) {
        getchar();

        if (score <= 100 && score >= 90)    printf("A\n");
        if (score >= 80 && score < 90)      printf("B\n"); 
        if (score >= 70 && score < 80)      printf("C\n");
        if (score >= 60 && score < 70)      printf("D\n");  
        if (score >= 0 && score < 60)       printf("E\n"); 
        if (score < 0 || score > 100)       printf("Score is error!\n");
    }

    return 0;
}