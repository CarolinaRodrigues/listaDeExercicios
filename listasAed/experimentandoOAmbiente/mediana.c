/*
    03
   Faça um programa para ler 3 números via teclado e imprimir a mediana entre os 3 
   números inteiros digitados.

    A mediana é o valor intermédiario entre os 3 números, o que não é nem o maior e 
    nem o menor dos 3. Exemplo: entre 2;10 e 3, a mediana é 3. Procure na internet a 
    definição de mediana caso ainda tenha dúvidas. 
*/

#include<stdio.h>

int main(){
    double N1, N2, N3, mediana;
    
    scanf("%lf%*c%lf%*c%lf%*c",&N1,&N2,&N3);

    //Comparações
    if(N1 < N2){
        if(N2 < N3){
            mediana = N2;
        }else{
            if(N1 < N3){
                mediana = N3;
            }else{
                mediana = N1;
            }
        }
    }else{
        if(N1 < N3){
            mediana = N1;
        }else{
            if(N2 < N3){
                mediana = N3;
            }else{
                mediana = N2;
            }
        }
    }

    printf("%0.lf\n",mediana);

}