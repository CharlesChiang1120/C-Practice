#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{   
    int v[100] = {0};
    printf("%zu\n", sizeof(v)/sizeof(v[0]));
    return 0;
}
