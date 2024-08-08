#include <string.h>
#include <stdio.h>
#include <time.h>
#include "include/joke.h"
#include "include/usr.h"

// Konami Code and wrong commands
int wrong_cmd;
char konami_code[] = "uuddlrlrba";

int main(void) {

    printf("To properly understand those jokes, you need to know Undertale.\n");
    printf("Read puns, that's it...\n");

    char input[10];
    while (1) {

        // Check how many wrong inputs there is, if 20 prints RTFM.
        if (wrong_cmd == 20) {
            printf("RTFM!\n");
        } else if (wrong_cmd == 30) {
            printf("Hey, it's 30 wrong commands. There's a help command int the program.");
        } else if (wrong_cmd == 30) {
            printf("You're driving a program insane.");
        } else if (wrong_cmd == 40) {
            printf("Stop it.");
        } else if (wrong_cmd == 50) {
            printf("I'm warning you.");
        } else if (wrong_cmd == 60) {
            printf("Okay, make as many errors as you want.");
        } else if (wrong_cmd == 100) {
            printf("You gay.");
            break;
        }

        // Prompt and input
        printf(">>> ");
        scanf("%s", input);

        // Command check
        if (strcmp(input, "help") == 0) {
            printf("Commands : joke, name, time, exit\n");
        } else if (strcmp(input, "joke") == 0) {
            joke();
        } else if (strcmp(input, "name") == 0) {
            get_name();
        } else if (strcmp(input, "exit") == 0) {
            printf("* I'm outta here.\n");
            break;
        } else if (strcmp(input, "time") == 0) {
            time_t rawtime;
            struct tm *timeinfo;
            time(&rawtime);
            timeinfo = localtime(&rawtime);
            printf("The time is %d:%d:%d\n", timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);
        } else if (strcmp(input, "editor") == 0) {
            swag();
        } else if (strcmp(input, konami_code) == 0) {
            printf("https://pastebin.com/v4vtCuC3\n");
            printf("3310\n");
            printf("Unicode\n");
        } else {
            wrong_cmd++;
            printf("Unknown command!\n");
        }
    }

    return 0;
}
