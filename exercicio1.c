#include<stdio.h>
int main(){
    int Matriz[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &Matriz[i][j]);
        }
    }
    printf("----- Elementos da Matriz -----\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("[%d] ", Matriz[i][j]);
        }
        printf("\n");
    }
}