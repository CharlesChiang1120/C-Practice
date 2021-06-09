#include<stdio.h>

int main(int argc, char const *argv[])
{
    int id;
    int total = 0;
    do {
        printf("Insert items' id: \n");
        scanf("%d", &id);
        switch (id){
            case 1: total += 90;
            break;
            case 2: total += 75;
            break;
            case 3: total += 83;
            break;
            case 4: total += 89;
            break;
            case 5: total += 71;
            break;
            default: total += 0;
            break;
        }

    }while(id != 0);
    printf("Total: %d", total);
    return 0;
}