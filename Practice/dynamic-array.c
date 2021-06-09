#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    int *number = 0;
    int length = 0;
    while(1){
        int input;
        scanf("%d", &input);
        if (input == 0){
            break;
        }
        int *larger = malloc(sizeof(int) * (length +1));
        for (int i = 0; i < length; i++){
            larger[i] = number[i];
        }
        free(number);
        number = larger;
        number[length] = input;
        length++;
    }
    printf("Numbers: ");
    for (int i = 0; i < length; i++){
        printf("%d ", number[i]);
    }
    printf("\n");
    return 0;
}