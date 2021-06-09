#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void str_print(char str[]){
    // int i;
    // for (i = 0; str[i] != '\0'; i++){
    //     printf("%c", str[i]);
    // }
    // printf("\n)
    printf("%s\n", str);
}


int main(int argc, char const *argv[])
{
    char str[] = "Hello World";
    str_print(str);
    return 0;
}