/*
    Faça uma função que receba como parâmetro um vetor com n inteiros e inverta as 
    posições dos elementos de maneira que o primeiro elemento troque de valor com o
     último, o segundo com o penúltimo e assim por diante. (inverter as posições dos 
     elementos do vetor) 

*/

#include<stdio.h>

void questao03(int v[], unsigned tamVetor){
    unsigned i, j;
    int tmp;
    for(i = 0; i < tamVetor; i++){
        for(j = i + 1; j < tamVetor; j++){
            if(i < j){
                tmp = v[i];
                v[i] = v[j];
                v[j] = tmp;
            }
        }
    }
}


void mostraVetor(int v[], unsigned tamVetor){
    unsigned i;
    for(i = 0; i < tamVetor; i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}

int main(){
    unsigned tamVetor;
    unsigned x;

    scanf("%u%*c",tamVetor);
    int vet[tamVetor];

    for(x = 0; x < tamVetor; x++){
        scanf("%d%*c",&vet[x]);
    }
    questao03(vet,tamVetor);
    mostraVetor(vet,tamVetor);

}