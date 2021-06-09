#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(int argc, char const *argv[])
{
    int b[10] = {0};
    int n;
    for (int i = 1; i <= 10; i++){
        scanf("%d", &n);
        b[n]++;
    }
    int max = 0;
    for (int i = 0; i <10; i++){
        if (b[i] >= b[max]){
            max = i;
        }
    }
    printf("%d", max);
    return 0;
}
