#include<stdio.h>

int main(int argc, char const *argv[])
{
    for (int i; i <= 30/2 ; ++i){
        int j = 30 - i;
        if (j * i == 221){
            printf("%d, %d\n", i, j);

        }
    }
    return 0;
}