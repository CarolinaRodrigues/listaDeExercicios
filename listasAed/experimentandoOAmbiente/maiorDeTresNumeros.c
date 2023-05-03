/*
    Escreva um programa que leia três números inteiros a partir do teclado. 
    Como saída, imprima os valores em ordem crescente.

*/

#include<stdio.h>

int main(){
    int N1, N2, N3,tmp;

    scanf("%d%*c%d%*c%d%*c",&N1,&N2,&N3);

    if(N1 > N2){
        tmp = N1;
        N1 = N2;
        N2 = tmp;
    }
    if(N2 > N3){
        tmp = N2;
        N2 = N3;
        N3 = tmp;
    }
    if(N1 > N2){
        tmp = N1;
        N1 = N2;
        N2 = tmp;
    }

    printf("\n");
    printf("%d\n%d\n%d\n",N1,N2,N3);
}