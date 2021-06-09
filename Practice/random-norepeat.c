#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(int argc, char const *argv[])
{   
    srand(time(0));
    int i, n[10] = {0};
    int j;
    for (i = 1; i <= 10; ++i){
        do{
            n[i-1] = rand() % 10 + 1;
            for (j = 1 ; j < i; j ++){
                if (n[i-1] == n[j-1]){
                    break;
                }
            }
        }while(j != i);
        printf("%d\t", n[i-1]);
    }
    printf("\n");
    return 0;
}
