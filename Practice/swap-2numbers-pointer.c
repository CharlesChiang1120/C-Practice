#include<stdio.h>
void swap(int *, int *);

int main(int argc, char const *argv[])
{
    int a = 3, b = 5;
    swap(&a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}