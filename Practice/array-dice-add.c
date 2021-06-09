#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    srand(time(0));
    int counter[11] = {0};

    for (int i = 1; i <= 100000; ++i){
        int sum = 0;
        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;
        sum = dice1 + dice2;
        counter[sum-2]++;
        }

    for (int i = 2; i <= 12; ++i){
        printf("%2d : %5d \n", i, counter[i - 2]);
        }

    return 0;
}