/*
    Faça uma função que receba como parâmetro uma matriz quadrada NxN 
    de números inteiros, onde N é uma constante previamente definida, 
    e um número inteiro K. A função deve retornar verdadeiro caso a 
    matriz contenha exatamente 4 (quatro) posições com valor igual a  K 
    e falso em caso contrário.
*/

#include<stdarg.h>
#define N 5

int contaQuatro(int mat[N][N], int k){
    unsigned l, c, cont = 0;

    for ( l = 0; l < N; l++){
        for ( c = 0; c < N; c++){
            if(mat[l][c] == k){
                cont++;
            }
        }
    }
    if(cont == 4){
        return 1;
    }
    return 0;
    

}

int main(){
    int x, y;
    int mat[N][N];
    int valor;

    for(x =0; x < N; x++){
        for(y = 0; y < N; y++){
            scanf("%d%*c",&mat[x][y]);
        }
    }

    scanf("%D%*c",&valor);
    if(contaQuatro(mat,valor)){
        printf("verdadeiro\n");
    }else{
        printf("falso\n");
    }
}