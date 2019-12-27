/********************** 13_2_1.c *******************
 *  目的：对chapter13的reminder.c进行修改，使之能够   *
 *  在天的基础上显示24小时时间排序 ，并且在月份天数和  *
 *  时间数超出范围时报错。                           *    
****************************************************/

#include<stdio.h>
#include<string.h>

#define MAX_REMIND 50   // 最多的提醒条数
#define MSG_LEN 100  // 每天提醒的最大长度

int read_line(char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN];    // 记录输入的字符串数组
    char day_str[4], clock_str[3], minute_str[3], tot_time_str[10], msg_str[MSG_LEN + 1];  // 记录日期和时间的字符串和提醒内容的字符串
    int day, clock, minute, i, j, num_remind = 0;

    for ( ; ; ) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day, time and reminder: ");
        // 读取日期
        scanf("%2d", &day);
        if (day == 0) {
            break;
        } else if (day > 31 || day < 0) {
            printf("Invalid time, ignored.\n");
            continue;
        }
        // 读取时间
        scanf("%2d", &clock);
        getchar();  // 时间中间的引号吃掉
        scanf("%2d", &minute);
        if (clock > 24 || clock < 0 || minute > 60 || minute < 0) {
            printf("Invalid time, ignored.\n");
            continue;
        }
        
        sprintf(day_str, "%3d", day);
        sprintf(clock_str, "%2d", clock);
        sprintf(minute_str, "%02d", minute);
        read_line(msg_str, MSG_LEN);

        strcpy(tot_time_str, day_str);
        strcat(tot_time_str, " ");
        strcat(tot_time_str, clock_str);
        strcat(tot_time_str, ":");
        strcat(tot_time_str, minute_str);

        for (i = 0; i < num_remind; i++) {
            if (strcmp(tot_time_str, reminders[i]) < 0) {
                break;
            }
        }
        for (j = num_remind; j > i; j--) {
            strcpy(reminders[j], reminders[j - 1]);
        }

        strcpy(reminders[i], tot_time_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Time  Reminder\n");
    for (i = 0; i < num_remind; i++) {
        printf("%s\n", reminders[i]);
    }

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n') {
        if (i < n) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';

    return i;
}