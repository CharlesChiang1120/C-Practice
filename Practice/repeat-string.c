#include<stdio.h>
#include<stdlib.h>
void str_read(char[]);

int main(int argc, char const *argv[])
{
    char str[15];
    str_read(str);
    printf("%s\n", str);
    return 0;
}

void str_read(char str[]){
    int i = 0;
    while(1){
        scanf("%c", &str[i]);
        if (str[i] == '\n'){
            break;
        }
        i++;
    }
    str[i] = '\0';
}