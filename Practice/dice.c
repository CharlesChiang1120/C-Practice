#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    int i;
    srand(time(0));
    for (i = 1; i <= 5; ++i){
        int dice = rand() % 6 + 1;
        printf("%d\n", dice);
    }
    return 0;
}