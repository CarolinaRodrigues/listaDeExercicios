/*
    Faça uma função que calcule e retorne o produto dos n primeiros números pares 
    positivos, onde n deve ser passado como parâmetro. A função deve calcular os 
    valores de forma iterativa. Não use uma fórmula pronta! Ex.: para n=4, a função 
    deve retornar 8*6*4*2=384, fazendo as operações de multiplicação mostradas. 
    Se n não for positivo, a função deve retornar 1. Assuma o valor de n como sendo um número inteiro positivo (não nulo)

O exercício acima foi passado como questão na primeira prova do ano de 2005 da 
turma de AED1 do professor
*/

#include<stdio.h>

long int questao01(long int valor){
    long int produto;
    int i;
    produto = 1;
    if( valor > 0){
        for(i = 2; i <= valor * 2; i+=2){
            produto *= i;
        }
    }
    return produto;
}

int main(){
    long int valor;

    scanf("%ld%*c",&valor);
    printf("%ld\n",questao01(valor));
}