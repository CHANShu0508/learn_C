/*************bubble_sort.c**************
 * Source: Practice some algorithm      *
 * Author: CHEN Shu                     *
 *   Time: 2020/01/06                   *
*****************************************/

#include<stdio.h>

#define LEN 10

void bubble_sort(int sequence[], int length);

int main()
{
    int sequence[LEN] = {34, 5, 67, 9, 1, 9, 89, 6, 23, 9};

    bubble_sort(sequence, LEN);

    int i;
    for (i = 0; i < LEN; i++) {
        printf("%d", sequence[i]);
        if (i == LEN - 1)   printf("\n");
        else printf(" ");
    }

    return 0;
}

void bubble_sort(int sequence[], int length)
{
    int i, swap, point; // i是控制循环次数的；swap是用以交换的；point是用以指向每次循环的进展
    for (i = length; i > 1; i--) {
        for (point = 0; point <= i - 2; point++) {
            if (sequence[point] > sequence[point + 1]) {
                swap = sequence[point];
                sequence[point] = sequence[point + 1];
                sequence[point + 1] = swap;
            }
        }
    }
}