/*
  Implemente o algoritmo de ordenação por inserção 
  em uma função que receba como parâmetros um vetor 
  de inteiros e seu tamanho. A ordenação deve ser 
  em ordem descrescente. A implementação deve ser 
  feita sem a utilização do comando “for” da linguagem C. 
  Faça sua solução a partir do código inicial e limitando-se a 
  alterar o código apenas entre as linhas marcadas como 
  //BEGINFUNCAOALUNO e //ENDFUNCAOALUNO.  
*/

// PARTE A MODIFICAR
// INICIOFUNCAOALUNO
// ESCREVA NESSA ÁREA  A FUNCAO questao07 que deve atender ao enunciado do exercício. 
//BEGINFUNCAOALUNO

void questao07(int v[], unsigned tamVet){
	int i, j, pivot;
	j = 1;
	while(j < tamVet){
		pivot = v[j];
		i = j-1;
		while((i >= 0) && (pivot > v[i])){
			v[i+1] = v[i];
			i--;
		}
		v[i+1] = pivot;
		j++;
	}
}

//ENDFUNCAOALUNO


// ABAIXO CODIGO USADO PARA TESTE DA FUNCAO. NÃO MOFIQUE!

#include <stdio.h>
#include <stdlib.h>

// mostra dados de um vetor

void mostraVetor(int vet[], unsigned n) {
  unsigned x;

  for(x = 0; x< n; x++) {
    printf("%d ",vet[x]);
  }
  printf("\n");
}

int main() {
   unsigned tamVetor;
   unsigned x;

   scanf("%u%*c",&tamVetor);
   int *vet = (int*) malloc(sizeof(int)*tamVetor);
	
	for(x = 0; x< tamVetor; x++) {
     scanf("%d%*c",&vet[x]);
   } 
   questao07(vet,tamVetor);
   mostraVetor(vet,tamVetor);
   free(vet);
}
