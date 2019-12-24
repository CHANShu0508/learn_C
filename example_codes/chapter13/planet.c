//  planets.c
//  目的：识别放置在命令行中的是否是行星的名字

#include<stdio.h>
#include<string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
    char *planets[] = {"Mercury", "Venus", "Earth",
                    "Mars", "Jupiter", "Saturn",
                    "Uranus", "Neptune", "Pluto"};
    int i, j;

    for (i = 0; i < argc; i++) {
        for (j = 0; j < NUM_PLANETS; j++) {
            if (strcmp(argv[i], planets[j]) == 0) {
                printf("%s is planet %d.\n", planets[j], j + 1);
                break;
            }
        }
        if (j == NUM_PLANETS) {
            printf("%s is not a planet.\n", argv[i]);    // 循环一圈也没找到对应的就不是
        }
    }

    return 0;           
}