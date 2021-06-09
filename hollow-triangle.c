#include<stdio.h>

int main(int argc, char const *argv[])
{
    int N;
    printf("N:\n");
    scanf("%d", &N);
    for (int i = 1; i <= N; ++i){
        for (int j =1; j <= i; ++j){
            if (i == N || j == 1 || j == i){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}