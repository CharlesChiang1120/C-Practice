#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    srand(time(0));
    // int counter[6] = {0};
    int counter[6] = {0, 0, 0, 0, 0, 0};
    for (int i = 1; i <= 90000; ++i){
        int dice = rand() % 6 + 1;
        counter[dice-1]++;
        }
    for ( int i = 0; i <= 5; ++i){
        printf("%d : %d \n", i+1, counter[i]);
        }
    return 0;
}