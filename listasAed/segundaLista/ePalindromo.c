/*
    Faça uma função NÃO RECURSIVA que receba como 
    parâmetro um nome e retorne verdadeiro caso o 
    nome seja um palíndromo, retornando falso em 
    caso contrário.
*/


#include<stdio.h>
#include<string.h>

int palindromo(char palavra[]){
    int i, tam;
    tam = strlen(palavra);
    for(i = 0; i < tam / 2; i++){
        if(palavra[i] != palavra[ tam - i - 1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char name[100];

    scanf("%[^\n]%*c",name);
    if(palindromo(name)){
        printf("SIM");
    }else{
        printf("NAO");
    }
}