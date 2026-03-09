#include<stdio.h>
int main(){
    int matriz[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("----- Elementos da Matriz -----\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("[%2d]", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Elementos fora da diagonal principal: ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i != j){
                printf("%d ", matriz[i][j]);
            }
        }
    }
    printf("\nElementos fora da diagonal secundaria: ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(!(i + j == 3 - 1)){
                printf("%d ", matriz[i][j]);
            }
        }
    }
}