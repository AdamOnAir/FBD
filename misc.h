#include <stdio.h>

char name[];
int age;

int data(void) {
    printf("Welcome to the survey.");

    // Name
    printf("Name:\n ");
    printf("(data) ");
    scanf("%s", name);

    // Age
    printf("Age: \n");
    printf("(data) ");
    scanf("%d", &age);

    // Realization
    printf("Useless infos.\n");

    return 0;
}

int swag(void) {
    printf("Made with Vim 😎.\n");
    return 0;
}

// 3310