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
        // Movimentando a Torre 5 casas para a direita
        printf("Digite a quantidade de casas a serem movimentadas (entre 1 e 5):\n");
        scanf("%d", &casas);
        if (casas > 0 && casas <= 5){
            for (i = 1; i <= casas; i++)
            {
                printf("Torre, Direita !\n");
            }    
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
        if (casas > 0 && casas <= 5){
            i = 1;
            while (i <= casas)
            {
                printf("Bispo, Cima e Direita !\n");
                i++;
            }               
        }else
        {
            printf("Digite um valor valido entre 1 e 5.\n");
        }      
        break;
    case 'r':
    case 'R':
        //Movimentando a Rainha 8 Casas para qualquer direção
        printf("Digite a quantidade de casas a serem movimentadas (entre 1 e 8):\n");
        scanf("%d", &casas);
        if (casas > 0 && casas <= 8){
            i = 1;
            do
            {
                printf("Rainha, Qualquer direcao !\n");
                i++; 
            } while (i <= casas);             
        }else
        {
            printf("Digite um valor valido entre 1 e 5.\n");
        }      
        break;
    case 'c':
    case 'C':
        //Movimentando o Cavalo 2 Casas para baixo e 1 para a esquerda
        for (int i = 1; i < 2; i++)
        {
            int j = 1;
            while (j <= 2)
            {
                printf("Cavalo, Baixo.\n");
                j++;
            }
            printf("Cavalo, Esquerda.\n");
        }
        break;
    default:
        // Entrada de dado errada
        printf("Opcao invalida !\n");
        break;
    }
    return 0;
}