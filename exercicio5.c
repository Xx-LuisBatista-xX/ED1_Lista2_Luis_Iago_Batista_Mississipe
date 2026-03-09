#include<stdio.h>
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
    printf("Elementos Diagonal: ");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == j){
                printf("%d ", Matriz[i][j]);
            }
        }
    }
}