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
        printf("Q:");
        scanf("%d", &query);
        if (query == 0){
            break;
        }
        int nearset_n;
        for (int i = 0; i < 10; i++){
            if ( abs(query - number[i]) < abs(query - nearset_n)){
                nearset_n = number[i]; 
            }
        }printf("Ans:%d\n", nearset_n);
    }
    return 0;
}
