#include <string.h>
#include <stdio.h>
#include <time.h>
#include "joke.h"

int main(void) {

    printf("Read puns, that's it...\n");

    char input[10];
    while (1) {
        printf(">>> ");
        scanf("%s", input);

        if (strcmp(input, "help") == 0) {
            printf("Commands : joke, exit, issue, time\n");
        } else if (strcmp(input, "joke") == 0) {
            joke();
        } else if (strcmp(input, "exit") == 0) {
            printf("Bye bye!\n");
            break;
        } else if (strcmp(input, "issue") == 0) {
            printf("Report issue at https://github.com/fbdev64/FBD\n");
        } else if (strcmp(input, "time") == 0) {
            time_t rawtime;
            struct tm * timeinfo;
            time(&rawtime);
            timeinfo = localtime(&rawtime);
            printf("The time is %d:%d:%d\n", timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);
        } else if (strcmp(input, "dog") == 0 ) {
            printf("Hmm. So, you want to know the Universe's secrets ?\n Password : 3310\n Format : Unicode\n Link : https://pastebin.com/v4vtCuC3\n ");
        } else {
            printf("Unknown command!\n");
        }
    }

    return 0;
}