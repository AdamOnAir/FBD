#include <string.h>
#include <stdio.h>
#include "include/joke.h"
#include "include/airlib.h"

#if __APPLE__
   SegFault();
#endif

// Konami Code and wrong commands
int wrong_cmd;
char konami_code[] = "uuddlrlrba";

int time_local(void) {
    int t = GetGameTime();
    return t;
}

int main(void) {

    InitWindow();

    printf("To properly understand those jokes, you need to know Undertale.\n");

    char input[10];
    while (1) {

        if (wrong_cmd == 20) {
            printf("RTFM!\n");
        } else if (wrong_cmd == 30) {
            printf("Hey, it's 30 wrong commands. There's a help command int the program.\n");
        } else if (wrong_cmd == 30) {
            printf("You're driving a program insane.\n");
        } else if (wrong_cmd == 40) {
            printf("Stop it.\n");
        } else if (wrong_cmd == 50) {
            printf("I'm warning you.\n");
        } else if (wrong_cmd == 60) {
            printf("Okay, make as many errors as you want.\n");
        } else if (wrong_cmd == 100) {
            SegFault();
        }

        // Prompt and input
        printf(">>> ");
        scanf("%s", input);

        // Command check
        if (strcmp(input, "help") == 0) {
            DisplayH2("joke, time, exit \n", "red");
        } else if (strcmp(input, "joke") == 0) {
            joke();
        } else if (strcmp(input, "name") == 0) {
            DisplayBlueColor("Your name ? Useless info.\n");
        } else if (strcmp(input, "exit") == 0) {
            printf("* I'm outta here.\n");
            break;
        } else if (strcmp(input, "time") == 0) {
            time_local();
        } else if (strcmp(input, konami_code) == 0) {
            printf("https://pastebin.com/v4vtCuC3\n");
            printf("3310\n");
            printf("Unicode\n");
        } else if (strcmp(input, "cpp") == 0) {
            SegFault();
        } else {
            wrong_cmd++;
            printf("Unknown command!\n");
        }
    }

    CloseWindow();
}
