#include<stdio.h>

void sort2numbers(int *, int *);
void swap(int *, int *);

int main(int argc, char const *argv[])
{
    int a = 10, b = 7;
    sort2numbers(&a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}

void sort2numbers(int *x, int *y){
    if (*x > *y){
        swap(x, y);
    }
}

void swap(int *x, int *y){
    int temp = *x;
        *x = *y;
        *y = temp;
}