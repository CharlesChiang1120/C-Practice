#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number;
    int sum = 0;
    float average;
    int count = 0;
    printf("Insert an integer: \n");
    scanf("%d", &number);
    while (number != 0){
        sum += number;
        count++;
        scanf("%d", &number);
    }
    if (count == 0){
        printf("N/A");
    }else{
        printf("%f\n", (float) sum/count);
    }
    return 0;
}