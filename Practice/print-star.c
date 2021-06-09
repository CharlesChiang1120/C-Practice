#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number;
    printf("N:\n");
    scanf("%d", &number);
    for(int i =1; i<=number; i++){
        printf("*");
    }
    return 0;
}