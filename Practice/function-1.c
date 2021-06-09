#include<stdio.h>

double div2(double);


int main(int argc, char const *argv[])
{   
    int N;
    printf("N:\n");
    scanf("%d", &N);
    printf("%f", div2(N * 10));
    return 0;
}

double div2(double x){
    return x / 2.;
}