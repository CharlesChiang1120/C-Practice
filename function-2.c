#include<stdio.h>
int max2(int, int);
int max3(int, int, int);

int max2(int a, int b){
    int max;
    if (a >= b){
        max = a;
    }else{
        max = b;
    }
    return max;
}

int max3(int x, int y, int z){
    return max2(max2(x, y), z);
}

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Please enter three integers: \n");
    scanf("%d%d%d", &a, &b, &c);
    printf("The maximum is %d", max3(a, b, c));
    return 0;
}

