#include <stdio.h>

int main(){
    int a, b;
    scanf("%d\n%d", &a, &b);
    for (int c = a; c<=b; c++){
        if (c <= 9){
            if(c == 1){
                printf("one\n");
            } else if (c == 2){
                printf("two\n");
            } else if(c == 3){
                printf("three\n");
            } else if( c == 4){
                printf("four\n");
            } else if(c == 5){
                printf("five\n");
            } else if (c == 6){
                printf("six\n");
            } else if(c == 7){
                printf("seven\n");
            } else if(c == 8){
                printf("eight\n");
            } else{
                printf("nine\n");
            }
        } else if( c%2 == 0){
            printf("even\n");
        } else{
            printf("odd\n");
        }
    }
    return 0;
}