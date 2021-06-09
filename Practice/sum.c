#include<stdio.h>

int sum(int x){
    if(x == 0) return 0;
    else return sum(x-1)+x;
}
int main(int argc, char const *argv[])
{   
    // int sum = 0;
    // for(int i = 0; i <= 100; i++){
    //     sum +=i;
    // }
    // printf("%d\n", sum);
    int x;
    printf("Insert an integer: \n");
    scanf("%d", &x);
    printf("Sum:%d", sum(x));
    return 0;
}
