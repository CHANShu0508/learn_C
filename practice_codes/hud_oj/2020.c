/*************2020.c**************
 * Source: HDU Online Judge 2020 *
 * Author: CHEN Shu              *
 *   Time: 2020/01/05            *
**********************************/

#include<stdio.h>
#include<math.h>

#define MAX_LEN 100

void bubble_sort(int sequence[], int length);

int main()
{
    int sequence[MAX_LEN] = {0};
    while (1) {
        int length = 0, i;
        scanf("%d", &length);
        if (length == 0)  break;
        for (i = 0; i < length; i++)  scanf("%d", &sequence[i]);

        bubble_sort(sequence, length);

        for (i = 0; i < length; i++) {
            printf("%d", sequence[i]);
            if (i == length - 1)    printf("\n");
            else                    printf(" ");
        }
    }
    return 0;
}

void bubble_sort(int sequence[], int length)
{
    int i, swap, point; // i是控制循环次数的；swap是用以交换的；point是用以指向每次循环的进展
    for (i = length; i > 1; i--) {
        for (point = 0; point <= i - 2; point++) {
            if (abs(sequence[point]) < abs(sequence[point + 1])) {
                swap = sequence[point];
                sequence[point] = sequence[point + 1];
                sequence[point + 1] = swap;
            }
        }
    }
}