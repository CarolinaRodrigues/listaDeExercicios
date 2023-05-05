/*
    Implemente uma função que receba um vetor 
    ordenado de inteiros e uma chave, também inteira.
    A função deve retornar verdadeiro caso a chave 
    ocorra exatamente 1 vez no vetor, retornando 
    falso em caso contrário. Considere que o vetor 
    pode conter repetições de valores. Utilize busca 
    binária
*/

#include<stdio.h>
int buscaBinaria(int v[], unsigned tam, int chave){
    int inicio, meio, fim;
    inicio = 0;
    fim = tam - 1;
    while (inicio <= fim){
        meio = (inicio+fim) / 2;
        if (chave < v[meio]){
            fim = meio -1;
        }else if(chave > v[inicio]){
            inicio = meio + 1;
        }else{
            if(chave == v[meio-1] || chave == v[meio + 1]){
                return 0;
            }else{
                return 1;
            }
        }
        
    }
    
}

int main(){
    unsigned tamanhoVetor;
    int chave;
    
    scanf("%d%*c",&chave);
    scanf("%u%*c",&tamanhoVetor);
    int vet[tamanhoVetor];
    ler(vet,tamanhoVetor);
    if(buscarBinaria(vet,tamanhoVetor,chave)) {
        printf("SIM");
    }
    else {
        printf("NAO");
    }
}