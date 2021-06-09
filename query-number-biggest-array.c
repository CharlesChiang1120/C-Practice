#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(int argc, char const *argv[])
{
    int number[10];
    int query;
    for (int i = 1; i <= 10; i++){
        scanf("%d", &number[i-1]);
    }
    while (1){
        int max_i = -1;
        printf("Q:");
        scanf("%d", &query);
        if (query == 0){
            break;
        }
        for (int i = 0; i < 10; i++){
            if (number[i] <= query && (max_i == -1 || number[i] > number[max_i])){
                max_i = i; 
            }
        }
        if (max_i != -1){
            printf("%d\n", number[max_i]);
        }
    }
    return 0;
}
