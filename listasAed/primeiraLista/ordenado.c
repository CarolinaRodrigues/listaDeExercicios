/*
    Faça uma função que receba como parâmetro um vetor de inteiros (V) e 
    retorne verdadeiro caso o vetor esteja ordenado de forma crescente (V[i] <= V[j] 
    se i<j).

Foi questão da primeira prova da turma de AED1 de 2006 do prof. Edleno.
*/

#include<stdio.h>

int main(){
    unsigned tamVetor;
    unsigned x;

    scanf("%u%*c",&tamVetor);
    int vet[tamVetor];

    for(x = 0; x < tamVetor; x++){
        scanf("%d%*c",&vet[tamVetor]);
    }
    if(questao04(vet,tamVetor)){
        printf("VERDADEIRO\n");
    }else{
        printf("FALSO\n");
    }

}