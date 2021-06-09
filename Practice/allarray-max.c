#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int maxArg(int n[], int N);


int main(int argc, char const *argv[])
{
    int n[3] = {3, 7, 9};
    printf("Max: %d\n", maxArg(n, 3));
    int v[5] = {1, 6, 39, 40, 99};
    printf("Max: %d", maxArg(v, 5));

    return 0;
}

int maxArg(int n[], int N){
    int max = n[0];
    for (int i = 0; i < N; i++){
        if (n[i] > max){
            max = n[i];
        }
    }return max;
}