/*************2020.c**************
 * Source: HDU Online Judge 2020 *
 * Author: CHEN Shu              *
 *   Time: 2020/01/05            *
**********************************/

#include<stdio.h>
#include<math.h>

#define MAX_LEN 100

int main()
{
    int sequence[MAX_LEN] = {0};
    while (1) {
        int length = 0;
        while (1) {
            scanf("%d", &sequence[length]);
            length++;
            if (getchar() == '\n')  break;
        }
        if (sequence[0] == 0)  break;

        
    return 0;
}