/*
    Faça uma função que receba como parâmetro um vetor de inteiros, o
    número de elementos do vetor e um parâmetro de referencia de valor 
    inteiro delta. A função deve substituir cada elemento do vetor pela 
    diferença entre seu valor original e delta (valor original - delta).
*/


#include<stdio.h>

void computaDiferencas(int v[], unsigned tam, int delta){
    unsigned x;
    for(x = 0; x < tam; x++){
        v[x] = v[x] - delta;
    }
}

void ler(int v[], unsigned tam){
    unsigned x;
    for(x = 0; x < tam; x++){
        scanf("%d%*c",&v[x]);
    }
}

void mostrar(int v[], unsigned tam){
    unsigned x;
    for(x = 0; x < tam - 1; x++){
        printf("%d ", v[x]);
    }
    if (tam){
        printf("%d",v[x]);
    }
}

int main(){
    unsigned tamVetor;
    int delta;

    scanf("%d%*c",&delta);
    scanf("%u%*c",&tamVetor);
    
    int vet[tamVetor];
    ler(vet,tamVetor);
    computaDiferencas(vet, tamVetor, delta);
    mostrar(vet,tamVetor);
}