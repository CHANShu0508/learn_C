//  reminder.c
//  目的：输入日期和相应的时间。当输入为0时终止，按时间顺序打印出时间
#include<stdio.h>
#include<string.h>

#define MAX_REMIND 50   // 最多的提醒条数
#define MSG_LEN 60  // 每天提醒的最大长度

int read_line(char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN];    // 记录输入的字符串数组
    char day_str[3], msg_str[MSG_LEN + 1];  // 记录日期的字符串和提醒内容的字符串
    int day, i, j, num_remind = 0;

    for ( ; ; ) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day and reminder: ");
        scanf("%2d", &day);
        if (day == 0) {
            break;
        }
        sprintf(day_str, "%2d", day);
        read_line(msg_str, MSG_LEN);

        for (i = 0; i < num_remind; i++) {
            if (strcmp(day_str, reminders[i]) < 0) {
                break;
            }
        }
        for (j = num_remind; j > i; j--) {
            strcpy(reminders[j], reminders[j - 1]);
        }

        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Reminder\n");
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