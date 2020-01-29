/*************2021.c**************
 * Source: HDU Online Judge 2021 *
 * Author: CHEN Shu              *
 *   Time: 2020/01/22            *
**********************************/

#include<stdio.h>

#define MAX_NUM 100

int compute(int numMoney);
int exact_num(int num, int *id);

int main()
{
    int numTeacher, i;
    while (1) {
        scanf("%d", &numTeacher);
        if (numTeacher == 0)  break;  // 正常终止
        // 读入工资值
        int numMon[MAX_NUM] = {0};
        for (i = 0; i < numTeacher; i++) {
            scanf("%d", &numMon[i]);
        }
        // 函数计算并输出
        int numTot = 0, numPages;
        for (i = 0; i < numTeacher; i++) {
            numPages = compute(numMon[i]);
            numTot += numPages;
        }

        printf("%d\n", numTot);
    }

    return 0;
}

int compute(int numMoney)
{
    int hundred, fifty, ten, five, two, one, tot = 0;
    int *pointerMoney = &numMoney;

    hundred = exact_num(100, pointerMoney);
    fifty = exact_num(50, pointerMoney);
    ten = exact_num(10, pointerMoney);
    five = exact_num(5, pointerMoney);
    two = exact_num(2, pointerMoney);
    one = exact_num(1, pointerMoney);

    tot = hundred + fifty + ten + five + two + one;

    return tot;
}

int exact_num(int num, int *id)
{
    int pages = 0;
    pages = *id / num;

    *id = *id - num * pages;

    return pages;
}