#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(int argc, char const *argv[])
{   
    srand(time(0));
    int i, counter[10] = {0};
    int n;
    for (i = 1; i <= 10; ++i){
        do{
            n = rand() % 10 + 1;
        }while(counter[n-1] != 0);
        printf("%d\t", n);
        counter[n-1]++;
    }
    printf("\n");
    return 0;
}
