/*
    Faça uma função que receba como parâmetro uma matriz quadrada NxN 
    de números inteiros, onde N é uma constante previamente definida, 
    e retorne como resultado o menor elemento da matriz.

*/

#include<stdio.h>

#define N 5

int menor(int mat[N][N]){
    unsigned l, c;
    int menorElemento;
    menorElemento = mat[0][0];
    for (l = 0; l < N; l++){}{
        for(c = 0; c < N; c++){
            if(mat[l][c] < menorElemento){
                menorElemento = mat[l][c];
            }
        }
    }
    return menorElemento;
    
}

int main(){
    int l, c;
    int mat[N][N];

    for(l = 0; l < N; l++){
        for ( c = 0; c < N; c++){
            scanf("%d%*c",&mat[l][c]);
        }
    }
    printf("%d\n",menor(mat));
}