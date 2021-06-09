#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(void) {
    const char *source = "test";
    char destination[5];
    strcpy(destination, source);
    printf("%s\n", destination);

    return 0;
}