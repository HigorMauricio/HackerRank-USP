#include <stdio.h>

void update(int *pa, int *pb){
    int a_temporario = *pa;
    int b_temporario = *pb;
    *pa += b_temporario;
    *pb -= a_temporario;
    if(*pb<0){
        *pb *=-1;
    }
}

int main(){
    int a, b;
    int *pa = &a;
    int *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);
    
    return 0;
}