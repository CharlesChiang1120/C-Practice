#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int count = 10;
    srand(time(NULL));
    int answer = (rand() % 100) +1;
    int guess;
    while (count != 0){
        printf("You have %d times! \n", count);
        printf("Guess a number: \n");
        scanf("%d", &guess);
        if (guess > answer){
            printf("Too Large!\n");
            count -= 1;
        }else if (guess < answer)
        {
            printf("Too Small!\n");
            count -= 1;
        }else {
            printf("Correct!\n");
            break;
        }
    }return 0;
}