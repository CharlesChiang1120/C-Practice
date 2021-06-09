#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(int argc, char const *argv[])
{
    int b[10] = {0};
    int n;
    for (int i = 0; i < 10; i++){
        scanf("%d", &n);
        b[(n-1)/10]++;
    }
    
    for (int i = 1; i <=10 ; ++i){
        printf("%d: ", i*10);
        for (int j = 1; j <= b[i-1]; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
