/*
    Faça uma função que calcule a soma dos elementos da diagonal 
    secundária de uma matriz de inteiros passada como parâmetro e 
    retorne esta soma como resultado. A dimensão da matriz deve ser 
    NxN, onde N é uma constante.

*/

#include<stdio.h>

#define N 5

int soma(int mat[N][N]){
    int l, c, sum = 0;
    for (l = 0; l < N; l++){
        for(c = 0; c < N; c++){
            if(l + c == N -1){
               sum += mat[l][c];
            }
        }
    }
    return sum;
}

int main(){
    int l, c;
    int mat[N][N];
    
    for(l = 0; l < N; l++){
        for(c = 0; c < N; c++){
            scanf("%d%*c",&mat[l][c]);
        }
    }
    printf("%d\n",soma(mat));

}