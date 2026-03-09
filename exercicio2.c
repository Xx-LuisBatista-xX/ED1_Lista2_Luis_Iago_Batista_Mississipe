#include<stdio.h>
int SomaColunaMatriz(int matriz[4][4], int coluna){
    int soma = 0;
    for(int i = 0; i < 4; i++){
        soma += matriz[i][coluna];
    }
    return soma;
}
int main(){
    int Matriz[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &Matriz[i][j]);
        }
    }
    printf("----- Elementos Matriz -----\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("[%2d] ", Matriz[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 4; i++){
        printf("Soma Coluna %d: %d\n", i+1, SomaColunaMatriz(Matriz,i));
    }
}