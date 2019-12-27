// ***             13_1.c           *** //
// *** 目的：找出“最大”与“最小”的单词 *** //

#include<stdio.h>
#include<string.h>

#define MAX_LEN 20

int main(void)
{
    char smallest_word[MAX_LEN + 1], largest_word[MAX_LEN + 1], read[MAX_LEN + 1];
    printf("Enter a word: ");
    scanf("%s", smallest_word);
    strcpy(largest_word, smallest_word);

    while (1) {
        printf("Enter a word: ");
        scanf("%20s", read);
        if (strcmp(read, smallest_word) < 0) {
            strcpy(smallest_word, read);
        } else if (strcmp(largest_word, read) < 0) {
            strcpy(largest_word, read);
        }

        if (strlen(read) == 4) {
            break;
        }
    }

    printf("The smallest word is \"%s\".\n", smallest_word);
    printf("The largest word is \"%s\".\n", largest_word);

    return 0;
}