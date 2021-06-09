#include<stdio.h>

int main(int argc, char const *argv[])
{
    int input;
    int isPrime = 1;
    printf("Insert an integer: \n");
    scanf("%d", &input);
    for(int i = 2; i < input && isPrime; ++i){
        if (input % i == 0){
            isPrime = 0;
        }
    }

    if (isPrime) {
        printf("Prime number! ");
    } else { 
        printf("Not prime number! ");
    }
    return 0;
}