#include <stdio.h>

char name[];

int get_name(void) {
  printf("Enter your name :\n");
  scanf("%s", name);
  return 0;
}

int swag(void) {
    printf("Made with Vim!\n");
    return 0;
}
