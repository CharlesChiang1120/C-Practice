#include<stdio.h>

int main(int argc, char const *argv[])
{
   int N;
    printf("N:\n");
    scanf("%d", &N);
    for (int i = 1; i <= N; ++i){
        for (int j =1; j <= N; ++j){
            if (i+j >= N+1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}