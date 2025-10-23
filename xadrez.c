// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nome: Marcio Lemos de Paiva - Matrícula - 202507333488

// Nível Aventireiro - Movimentação das Peças
// Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

// Implementação de Movimentação do Bispo
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

// Implementação de Movimentação da Torre
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

// Implementação de Movimentação da Rainha
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

// Nível Aventureiro - Movimentação do Cavalo
// Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
// Um loop pode representar a movimentação horizontal e outro vertical.

// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.

// Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
// Inclua o uso de continue e break dentro dos loops.
#include <stdio.h>

void moverTorre(int casasT)
{
    if (casasT > 0)
    {
        printf("Direita\n");
        moverTorre(casasT - 1);
    }
}

void moverBispo(int casasB)
{
    if (casasB > 0)
    {
        printf("Cima\n");
        printf("Esquerda\n");       
        moverBispo(casasB - 1);
    }
}
void moverRainha(int casasR)
{
    if (casasR > 0)
    {
        printf("Esquerda\n");
        moverRainha(casasR - 1);
    }
}

int main(){
    int casas, i;
    char peca;
    
    printf("Digite a peca a ser movimentada:\n");
    printf("T. Torre\n");
    printf("B. Bispo\n");
    printf("R. Rainha\n");
    printf("C. Cavalo\n");
    scanf("%c", &peca);
    
    
    switch (peca)
    {
    case 't':
    case 'T':
        // Movimentando a Torre até 5 casas para a direita
        printf("Digite a quantidade de casas a serem movimentadas (entre 1 e 5):\n");
        scanf("%d", &casas);
        if (casas > 0 && casas <= 5){
            moverTorre(casas);
        }else
        {
            printf("Digite um valor valido entre 1 e 5.\n");
        }      
        break;
    case 'b':
    case 'B':
        // Movimentando o Bispo 5 casas para cima e direita
        printf("Digite a quantidade de casas a serem movimentadas (entre 1 e 5):\n");
        scanf("%d", &casas);
        if (casas > 0 && casas <= 5)
        {
            moverBispo(casas);     
        }else
        {
            printf("Digite um valor valido entre 1 e 5.\n");
        }      
        break;
    case 'r':
    case 'R':
        //Movimentando a Rainha até 8 Casas para a esquerda.
        printf("Digite a quantidade de casas a serem movimentadas (entre 1 e 8):\n");
        scanf("%d", &casas);
        if (casas > 0 && casas <= 8)
        {
           moverRainha(casas);             
        }else
        {
            printf("Digite um valor valido entre 1 e 5.\n");
        }      
        break;
    case 'c':
    case 'C':
        //Movimentando o Cavalo 2 Casas para cima e 1 para a direita
        for (int i = 1, j = 3; i <= j; i++, j--)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
        break;
    default:
        // Entrada de dado errada
        printf("Opcao invalida !\n");
        break;
    }
    return 0;
}