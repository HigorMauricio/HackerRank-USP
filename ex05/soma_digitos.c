#include <stdio.h>
int main(){
    int n, digito, soma;
    scanf("%d", &n);
    soma = 0;
    while (n > 0){
        digito = n%10;
        soma += digito;
        n /= 10;
    }
    printf("%d", soma);
    return 0;
}