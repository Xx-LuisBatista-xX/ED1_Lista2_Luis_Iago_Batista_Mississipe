#include<stdio.h>
float SomaLinhaMatriz(float matriz[3][4], int coluna){
    float soma = 0;
    for(int i = 0; i < 4; i++){
        soma += matriz[coluna][i];
    }
    return soma;
}
int main(){
    float Matriz[3][4];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%f", &Matriz[i][j]);
        }
    }
    printf("----- Elementos Matriz -----\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("[%.2f] ", Matriz[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 3; i++){
        printf("Soma Linha %d: %.2f\n", i+1, SomaLinhaMatriz(Matriz,i));
    }
}