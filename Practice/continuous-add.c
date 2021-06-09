#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number;
    int sum = 0;
    printf("Insert an integer! (quit=0)\n");
    scanf("%d", &number);
    while (number != 0){
        sum += number;
        scanf("%d", &number);
    }
    printf("Total: %d\n", sum);
    return 0;
}