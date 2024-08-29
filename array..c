#include <stdio.h>

void greet_user() {
    char name[50];
    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Hello, %s! Welcome to the program.\n", name);
}

int main() {
    greet_user();
    return 0;
}

