#include <stdio.h>
#include <stdlib.h>
int main() {
    char name[100]; // Assuming the name will not exceed 100 characters

    printf("Please enter your name: ");
    scanf("%s", name);

    printf("Hello, %s!\n", name);

    return 0;
}