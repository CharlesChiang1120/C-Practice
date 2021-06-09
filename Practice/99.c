#include<stdio.h>

int main(int argc, char const *argv[]){
// {
//     for(int i = 2; i < 10; ++i){
//         for(int j = 1; j <10; ++j){
//             printf("%2d * %2d = %2d \n", i, j, i*j);
//         }
//     }
    int c;
    for (c = 1; c <= 72; ++c){
        int i = (c-1)/9 + 2;
        int j = (c-1)%9 + 1;
        printf("%2d * %2d = %2d\n", i, j, i*j);
    }
    return 0;
}