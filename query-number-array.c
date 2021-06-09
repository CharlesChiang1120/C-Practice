#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    int number[5] = {0};
    for (int i = 1; i <= 5; ++i){
        printf("%d:", i);
        scanf("%d", &number[i-1]);
    }

    int query;
    do{
        printf("Q: ");
        scanf("%d", &query);
        if (query == 0){
            break;
        }
        printf("Number is %d\n", number[query-1]);
    }while(query != 0);
    

    return 0;
}