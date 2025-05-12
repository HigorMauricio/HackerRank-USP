#include <stdio.h>

int marks_summation(int number_of_students, int marks[], char gender);

int main(){
    int number_of_students, soma;
    char gender;
    
    scanf("%d", &number_of_students);
    int marks[number_of_students];

    for(int i=0; i<number_of_students; i++){
        scanf("%d", &marks[i]);
    }

    scanf(" %c", &gender);
    soma = marks_summation(number_of_students, marks, gender);
    printf("%d", soma);
    
    return 0;
}

int marks_summation(int number_of_students, int marks[], char gender){
    int soma_de_nota = 0;
    if(gender =='b'){
        for(int i=0; i<number_of_students; i++){
            if(i == 0){
                soma_de_nota += marks[i];
            } else if (i%2 == 0){
                soma_de_nota += marks[i];
            }
        }
    } else{
        for (int i=0; i <number_of_students; i++){
            if(i == 0) continue;
            else if (i % 2 != 0){
                soma_de_nota += marks[i];
            }
        }
    }

    return soma_de_nota;
}