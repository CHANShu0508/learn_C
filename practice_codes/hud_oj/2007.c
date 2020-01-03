/*************2007.c**************
 * Source: HDU Online Judge 2000 *
 * Author: CHEN Shu              *
 *   Time: 2020/01/03            *
**********************************/

#include<stdio.h>

int main()
{
    int numInit, numFinal;  // 起始与终止整数

    while ((scanf("%d", &numInit)) != EOF) {
        int resultOdd = 0, resultEven = 0;  // 奇数与偶数的结果
        scanf("%d", &numFinal);
        getchar();
        if (numFinal < numInit) {  // 给出的两个数顺序可能不是正常顺序
            int t = numInit;
            numInit = numFinal;
            numFinal = t;
        }
        for (int i = numInit; i <= numFinal; i++) {
            if (i % 2 == 0) resultEven += (i * i);
            else resultOdd += (i * i * i);
        }

        printf("%d %d\n", resultEven, resultOdd);
    }

    return 0;
}