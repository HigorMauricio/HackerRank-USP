#include <stdio.h>

int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", max_of_four(a, b, c, d));
    
    return 0;
}

int max_of_four(int a, int b, int c, int d){
    int maior;
    maior = a;
    for (int i=0; i<4; i++){
        if (b > maior){
            maior = b;
        } else if (c > maior){
            maior = c;
        } else if (d > maior){
            maior = d;
        }
    }
    return maior;
}