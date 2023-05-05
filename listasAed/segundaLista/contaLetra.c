/*
    Faça uma função que receba como parâmetros um nome e uma letra. 
    A função deve retornar a quantidade de vezes que a letra passada 
    como parâmetro ocorre no nome. Durante a contagem considere que 
    letras maiúsculas e minúsculas são iguais. Considere também que a 
    função não deve alterar e nem copiar a string passada como parâmetro. 
    Não use qualquer função de manipulação de strings pre-existente em 
    sua função. A função não precisa tratar caracteres com acento. Eles 
    podem ser contatos sem conversão de maiúscula para minúscula.
*/


#include<stdio.h>

unsigned contaLetras(char palavra[], char letra){
    unsigned i, cont;
    i = 0;
    cont = 0;
    while (palavra[i]){
        if(palavra[i] >= 'A' && palavra[i] <= 'Z'){
            palavra[i] = palavra[i] + 32;
        }
        if (palavra[i] == letra){
            cont++;
        }
        i++;
    }
    return cont;
}

int main(){
    char nome[300];
    char letra;

    scanf("%[^\n]%*c",nome);
    scanf("%c%*c",&letra);
    printf("%u",contaLetras(nome,letra));
}