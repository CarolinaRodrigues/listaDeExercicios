/*
    Faça uma função que receba como parâmetro um texto t, armazenado em um vetor de 
    caracteres e retorne verdadeiro caso o texto contenha uma sequência de caracteres 
    p também fornecida como parâmetro, retornando falso em caso contrário. Assuma que 
    as sequências passadas são strings do c e que seu tamanho é dado pela função strlen.

    Ex: Se t=“eu estudo na UFAM, Universidade Federal do Amazonas” fosse passado como 
    parâmetro e p=”UFAM”, a função retornaria verdadeiro.
    Considere que você não pode usar funções de busca que já existem na linguagem C, 
    tais como strstr (que faz o mesmo que estou pedindo na questão). Dentre as opções 
    da string.h, você só pode usar a strlen().

    QUestão foi passada na primeira prova de AED1 de 2006
*/

#include<stdio.h>
#include<string.h>

int questao05(char t[], char p[]){
    unsigned tamT, tamP, i, j;
    int encontrou;
    tamT = strlen(t);
    tamP = strlen(p);

    for(i = 0; i <= tamT - tamP; i++){
        encontrou = 1;
        for(j = 0; j < tamP; j++){
            if (t[i + j] != p[j]){
                encontrou = 0;
                break;
            }
        }
    }
    if (encontrou){
        return 1;
    }
    return 0;
}


int main(){
    char texto[2000];
    char padrao[100];

    scanf("%[^#]%*c",texto);
    scanf("%[^#]%*c",padrao);

    if(questao05(texto,padrao)){
        printf("VERDADEIRO\n");
    }else{
        printf("FALSO\n");
    }
}