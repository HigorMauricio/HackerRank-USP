#include<stdio.h>
#include<string.h>

int main(){
    char palavra[1000];
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    for(int i=0; palavra[i] != '\0'; i++){
        if(palavra[i] != ' '){
            printf("%c", palavra[i]);
        } else {
            printf("\n");
        }
    }
}
