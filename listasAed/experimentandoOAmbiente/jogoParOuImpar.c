/*
    Par ou Ímpar

Codibentinho e Labiana estão brincando de par ou ímpar. Em ordem alfabética, 
Codibentinho decide se ele será o jogador "par" ou o jogador "ímpar". 
Os dois então jogam apenas com a mão direita, indicando de zero a cinco dedos. 
Vence aquele que adivinhar se a soma dos dedos será par ou ímpar.

Faça um programa para simular uma partida desse jogo.

Entrada e Saída

A entrada consistirá de três números inteiros.

Um inteiro 
pc indicando a escolha de Codibentinho. Se 
pc = 1
, então Codibentinho escolhe "par"; senão, ele escolhe "ímpar". Labiana 
automaticamente fica com outra opção.
Um inteiro 
dc indicando quantos dedos Colabeno mostrou.
Um inteiro 
dl indicando quantos dedos Labiana mostrou.
Como saída, imprima uma das duas linhas:

"Codibentinho venceu\n"
"Labiana venceu\n"
*/

#include<stdio.h>

int main(){
    int pc, dc, dl, somaCL;

    scanf("%d%*c",&pc);
    scanf("%d%*c%d%*c",&dc,&dl);

    somaCL = dc + dl;
    if((somaCL % 2 == 0 && pc == 1) || (somaCL % 2 == 1 && pc == 0)){
        printf("Codibentinho venceu\n");
    }else{
        printf("Labiana venceu\n");
    }

}