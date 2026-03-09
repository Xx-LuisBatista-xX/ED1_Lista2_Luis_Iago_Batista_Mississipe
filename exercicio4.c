#include<stdio.h>
int main(){
    int Matriz[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &Matriz[i][j]);
        }
    }
    int maior = Matriz[0][0], menor = Matriz[0][0];
    printf("----- Elementos Matriz -----\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("[%2d] ", Matriz[i][j]);
            if(Matriz[i][j] < menor){
                menor = Matriz[i][j];
            }
            if(Matriz[i][j] > maior){
                maior = Matriz[i][j];
            }
        }
        printf("\n");
    }
    printf("Menor Elemento: %d\n", menor);
    printf("Maior Elemento: %d", maior);
}