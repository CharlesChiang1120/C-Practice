#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number;
    int count = 0;
    printf("MAX:");
    scanf("%d", &number);
    for (int i = number;  i >= 1 && count <3; --i){
        if (i % 3 == 2 && i % 5 == 3 && i % 7 ==2){
            ++count;
            if (count == 3){
                 printf("%d ", i);
            }
           
        }
    }
    return 0;
}