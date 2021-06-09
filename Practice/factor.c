#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number;
    printf("N:");
    scanf("%d", &number);
    for(int i =1; i <= number; i++){
        if(number % i == 0){
            printf("%d ", i);
        }
    }
    return 0;
}