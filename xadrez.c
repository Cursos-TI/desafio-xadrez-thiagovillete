#include <stdio.h>
#include <string.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    //Declaração de variáveis
    char opcaoMenuPrincipal[2];
    char opcaoEscolhaPeca[2];
    int numeroCasas = 0;
    int opcaoDirecao = 0;
    char direcao[20];
    int i = 0;

    //Menu principal
    printf("Bem-vindo ao MateCheck!\n");
    printf("Escolha uma opcao:\n");
    printf("1 - Jogar\n");
    printf("2 - Regras de movimentação\n");
    printf("3 - Sair\n");
    printf("\n");
    scanf("%s", opcaoMenuPrincipal);

    //Switch menu principal
    switch (opcaoMenuPrincipal[0])
    {
    case '1':
        printf("Qual peça você deseja mover?\n");
        printf("1 - Bispo\n");
        printf("2 - Torre\n");
        printf("3 - Rainha\n");
        scanf("%s", opcaoEscolhaPeca);
        printf("\n");

        //Switch escolha de peça
        switch (opcaoEscolhaPeca[0])
        {
        //Movimentação do Bispo
        case '1':
            printf("Peça escolhida: Bispo.\n");
            printf("Quantas casas deseja mover?\n");
            scanf("%d", &numeroCasas);
            printf("Para qual direção?\n");
            printf("1 - Cima e esquerda\n");
            printf("2 - Cima e direita\n");
            printf("3 - Baixo e esquerda\n");
            printf("4 - Baixo e direita\n");
            scanf("%d", &opcaoDirecao);
            printf("\n");

            //Árvore de decisão para escolha da direção
            if (opcaoDirecao == 1)
            {
                strcpy(direcao, "cima e esquerda");
            }
            else if (opcaoDirecao == 2)
            {
                strcpy(direcao, "cima e direita");
            }
            else if (opcaoDirecao == 3)
            {
                strcpy(direcao, "baixo e esquerda");
            }
            else if (opcaoDirecao == 4)
            {
                strcpy(direcao, "baixo e direita");
            }
            else
            {
                printf("Direção inválida. Saindo do jogo...\n");
                return 0;
            }

            //Utilizando do-while para realiar a movimentação do Bispo
            do {
                printf("Movendo Bispo para %s...\n", direcao);
                i++;
            } while (i < numeroCasas);

            return 0;


        //Movimentação da Torre
        case '2':
            printf("Peça escolhida: Torre.\n");
            printf("Quantas casas deseja mover?\n");
            scanf("%d", &numeroCasas);
            printf("Para qual direção?\n");
            printf("1 - Direita\n");
            printf("2 - Esquerda\n");
            printf("3 - Cima\n");
            printf("4 - Baixo\n");
            scanf("%d", &opcaoDirecao);
            printf("\n");

            //Árvore de decisão para escolha da direção
            if (opcaoDirecao == 1)
            {
                strcpy(direcao, "direita");
            }
            else if (opcaoDirecao == 2)
            {
                strcpy(direcao, "esquerda");
            }
            else if (opcaoDirecao == 3)
            {
                strcpy(direcao, "cima");
            }
            else if (opcaoDirecao == 4)
            {
                strcpy(direcao, "baixo");
            }
            else
            {
                printf("Direção inválida. Saindo do jogo...\n");
                return 0;
            }           

            //Utilizando while para realizar a movimentação da Torre
            while (i < numeroCasas)
            {   
                
                printf("Movendo Torre para %s...\n", direcao);
                i++;
            }
            return 0;

        //Movimentação da Rainha
        case '3':
            printf("Peça escolhida: Rainha.\n");
            printf("Quantas casas deseja mover?\n");
            scanf("%d", &numeroCasas);
            printf("Para qual direção?\n");
            printf("1 - Direita\n");
            printf("2 - Esquerda\n");
            printf("3 - Cima\n");
            printf("4 - Baixo\n");
            printf("5 - Cima e direita\n");
            printf("6 - Cima e esquerda\n");
            printf("7 - Baixo e direita\n");
            printf("8 - Baixo e esquerda\n");
            scanf("%d", &opcaoDirecao);

            //Árvore de decisão para escolha da direção
            if (opcaoDirecao == 1)
            {
                strcpy(direcao, "direita");
            }
            else if (opcaoDirecao == 2)
            {
                strcpy(direcao, "esquerda");
            }
            else if (opcaoDirecao == 3)
            {
                strcpy(direcao, "cima");
            }
            else if (opcaoDirecao == 4)
            {
                strcpy(direcao, "baixo");
            }
            else if (opcaoDirecao == 5)
            {
                strcpy(direcao, "cima e direita");
            }
            else if (opcaoDirecao == 6)
            {
                strcpy(direcao, "cima e esquerda");
            }
            else if (opcaoDirecao == 7)
            {
                strcpy(direcao, "baixo e direita");
            }
            else if (opcaoDirecao == 8)
            {
                strcpy(direcao, "baixo e esquerda");
            }
            else
            {
                printf("Direção inválida. Saindo do jogo...\n");
                return 0;
            }
            
            //Utilizando for para realizar a movimentação da Rainha
            for (i = 0; i < numeroCasas; i++)
            {
                printf("Movendo Rainha para a %s...\n", direcao);
            }
            return 0;
        
        default:
            printf("Peça inválida. Saindo do jogo...\n");
            return 0;
        }
    case '2':
        printf("Regras de movimentação:\n");
        printf("O Bispo se move em diagonal.\n");
        printf("A Torre se move para a direita, esqueda, cima e baixo.\n");
        printf("A Rainha se move para todas as direções.\n");
        break;
    case '3':
        printf("Saindo do jogo...\n");
        break;
    
    default:
        printf("Opção inválida. Saindo do jogo...\n");
        break;
    }

    return 0;
}
