#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int max(int n[10]);
int avg10(int n[10]);

int main(int argc, char const *argv[])
{
    int n[10] = {0};
    for (int i = 1; i <= 10; i++){
        scanf("%d", &n[i-1]);
      } 
    printf("Max : %d\n", max(n));
    printf("Avg : %d\n", avg10(n));
    return 0;
}

int max(int n[10]){
    int max = n[0];
    for (int i = 0; i < 10; i++){
        if (n[i]> max){
            max = n[i];
        }
    }
    return max;
}

int avg10(int n[10]){
    int sum = n[0];
    for (int i = 0; i < 10; i++){
        sum += n[i];
    }
    return sum / 10;
}