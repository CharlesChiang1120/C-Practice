#include<stdio.h>

int main(int argc, char const *argv[])
{   
    int start;
    int end;
    printf("Insert a start number:\n");
    scanf("%d", &start);
    printf("Insert an end number:\n");
    scanf("%d", &end);
    for(; start <= end; start++){
        if(start%2 != 0){
            printf("%d\n", start);
        }
    }
    return 0;
}