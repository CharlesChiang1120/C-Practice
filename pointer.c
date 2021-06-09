#include<stdio.h>

int main(int argc, char const *argv[])
{
    int count = 1009;
    int *countAddr = &count;
    *countAddr = 1032;
    printf("%d", count);
    int result = *&count;
    *&result = 20;
    printf("result: %d", result);
    return 0;
}