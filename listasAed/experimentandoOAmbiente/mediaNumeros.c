/*
    02
    Faça um programa para ler 3 números reais via teclado e imprimir a 
    média dos valores lidos. A média deve ser impressa exatamente com duas 
    casas decimais e sem mostrar zeros à esquerda.
*/

#include<stdio.h>

int main(){
    float N1, N2, N3, mediaNumeros;

    printf("Entre com 3 notas:\n");
    scanf("%f%*c%f%*c%f%*c",&N1,&N2,&N3);

    mediaNumeros = (N1+N2+N3)/3;

    printf("%.2f\n", mediaNumeros);

}