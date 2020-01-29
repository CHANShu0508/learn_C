/*************2022.c**************
 * Source: HDU Online Judge 2022 *
 * Author: CHEN Shu              *
 *   Time: 2020/01/22            *
**********************************/

#include<stdio.h>
#include<math.h>

#define MAX_ROW 50
#define MAX_COLUMN 50

int main()
{
    int numRow, numColumn;
    while ((scanf("%d %d", &numRow, &numColumn)) != EOF) {
        int girls[MAX_ROW][MAX_COLUMN], i, j;
        // 初始化数组（整体初始化）
        for (i = 0; i < MAX_ROW; i++) {
            for (j = 0; j < MAX_COLUMN; j++) {
                girls[i][j] = 0;
            }
        }
        // 开始读入评分数据
        for (i = 0; i < numRow; i++) {
            for (j = 0; j < numColumn; j++) {
                scanf("%d", &girls[i][j]);
            }
        }
        // 评判程序
        int aimRow = 0, aimColumn = 0, numJudge;
        for (i = 0; i < numRow; i++) {
            for (j = 0; j < numColumn; j++) {
                if (i == 0 && j == 0) numJudge = girls[i][j];
                if (abs(girls[i][j]) > abs(numJudge)) {
                    aimRow = i;
                    aimColumn = j;
                    numJudge = girls[i][j];
                }
            }
        }
        // 输出结果
        printf("%d %d %d\n", aimRow + 1, aimColumn + 1, numJudge);
    }

    return 0;
}