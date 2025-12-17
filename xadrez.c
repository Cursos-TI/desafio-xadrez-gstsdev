#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função recursiva para imprimir movimento da torre
void movimentarTorre(int casas) {
    // Define o caso base (enquanto casas > 0, executa a função)
    if (casas > 0) {
        // Imprime o movimento da torre
        printf("  Direita\n");
        // Decrementa o valor de "casas" para a próxima execução
        movimentarTorre(casas - 1);
    }
}

// Função recursiva para imprimir movimento do bispo,
// usando loops aninhados
void movimentarBispo(int casas) {
    // Define o caso base (enquanto casas > 0, executa a função)
    if (casas > 0) {
        // Loops aninhados para imprimir direção do movimento do Bispo.
        // O bispo se move 1 vez para em uma direção,
        // 1 vez na direção perpendicular.
        for (int i = 0; i < 1; i++) {
            printf("  Cima, ");
            for (int j = 0; j < 1; j++) {
                printf("Direita");
            }

            printf("\n");
        }

        // Decrementa o valor de "casas" para a próxima execução.
        movimentarBispo(casas - 1);
    }
}

// Função recursiva para imprimir movimento da rainha
void movimentarRainha(int casas) {
    // Define o caso base (enquanto casas > 0, executa a função)
    if (casas > 0) {
        // Imprime a direção do movimento da rainha
        printf("  Esquerda\n");
        // Decrementa o valor de "casas" para a próxima execução.
        movimentarRainha(casas - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int numeroCasasTorre = 5;
    int numeroCasasBispo = 5;
    int numeroCasasRainha = 8;

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    int x = 1;

    printf("Torre:\n");

    // Enquanto "x" for menor ou igual a "numeroCasasTorre"
    while (x <= numeroCasasTorre) {
        // Imprime a direção do movimento da torre
        printf("  Direita\n");
        // Incrementa o valor de "x", para avançar no loop
        x++;
    }
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    int y = 1;

    printf("\nBispo:\n");

    // Pelo menos uma vez...
    do {
        // Imprime a direção do movimento do bispo
        printf("  Cima, Direita\n");
        // Incrementa o valor de "y", para avançar no loop
        y++;
    } while (y <= numeroCasasBispo); // Enquanto "y" for menor ou igual a "numeroCasasBispo"

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("\nRainha:\n");

    // Define a variável inicial diretamente no loop
    // Enquanto "z" for menor ou igual a "numeroCasasRainha"
    for (int z = 1; z <= numeroCasasRainha; z++) {
        // Imprime a direção do movimento da rainha
        printf("  Esquerda\n");
        // Ao final, executa-se o incremento de "z"
        // para avançar no loop
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\nCavalo:\n");

    // O cavalo deve se mover duas casas para baixo
    int numeroCasasCavalo = 2;
    // Após mover-se, o cavalo move-se 1 casa na direção perpendicular
    int movimentoFinal = 1;

    // Pelo menos uma vez...
    do {
        // Movimenta o cavalo por "numeroCasasCavalo" casas
        for (int w = 1; w <= numeroCasasCavalo; w++) {
            // Imprime a direção do movimento do cavalo
            printf("  Baixo\n");
        }

        // Imprime a direção do movimento final do cavalo,
        // que deve ser perpendicular ao movimento anterior
        printf("  Esquerda\n");

        // Decrementa o "movimentoFinal", para avançar no loop
        movimentoFinal -= 1;
    } while (movimentoFinal > 0); // Enquanto "movimentoFinal" for maior do que 0

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    
    printf("\nTorre:\n");
    movimentarTorre(numeroCasasTorre);

    printf("\nBispo:\n");
    movimentarBispo(numeroCasasBispo);

    printf("\nRainha:\n");
    movimentarRainha(numeroCasasRainha);

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    printf("\nCavalo:\n");

    // O cavalo deve se mover duas casas para cima, e uma para a direita

    // O loop executará "numeroCasasCavalo" + 1 vezes.
    // Por exemplo, se "numeroCasasCavalo" é 2, o loop executará
    // 3 vezes.
    for (
        int v = 1, t = numeroCasasCavalo + 1;
        v <= t;
        v++
    )
    {
        // Enquanto "v" for menor ou igual a "numeroCasasCavalo",
        // imprime "Cima". Quando "v" for maior que "numeroCasasCavalo",
        // imprime "Direita" e sai do loop.
        
        if (v > numeroCasasCavalo) {
            printf("  Direita\n");
            break;
        }

        printf("  Cima\n");
    }

    return 0;
}
