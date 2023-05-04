/*
    Faça uma função que receba como parâmetro um vetor de inteiros e seu tamanho. 
    A função deve modificar o vetor de maneira que:

a) Elementos com valor original menor ou igual a 0 fiquem com o valor -2;
b) Elementos cujo valor original (vo) esteja no intervalo (1<= vo <= 5) fiquem 
com o valor -1;
c) Elementos que não sejam enquadrados nos itens a e b recebam o valor 0.
*/

#include<stdio.h>

void questao02(int v[], unsigned tamVetor){
    unsigned i;
    for(i = 0; i < tamVetor; i++){
        if(v[i] <= 0){
            v[i] = -2;
        }else if(v[i] <= 1 || v[i] <= 5 ){
            v[i] = -1;
        }else{
            v[i] = 0;
        }
    }
}

void mostarVetor(int v[], unsigned tamVetor){
    unsigned i;
    for(i = 0; i < tamVetor; i++){
        printf("%d",v[i]);
    }
    printf("\n");
}

int main(){
    unsigned tamVetor;
    unsigned x;

    scanf("%u%*c",&tamVetor);
    int vet[tamVetor];

    for(x = 0; x < tamVetor; x++){
        scanf("%d%*c",&vet[x]);
    }
    questao02(vet,tamVetor);
    mostarVetor(vet,tamVetor);

}
/**
 * -1 -1 -1 0 -1 -2 -2 0 -2 0 0 -2 -2 -1 -2 0 -2 -1 -2 -1 -2 -2 -2 -1 0 -2 -1 -1 -2 -2 -2 -2 -1 -1 -2 -1 -2 -2 -2 -2 -2 -2 -2 -1 -2 -2 -1 -2 -2 0 -2 -1 -2 -2 -2 0 -2 -2 -1 0 -1 -2 0 -2 -2 -1 -2 -2 -1 -2 0 0 -2 -1

*/