#include <stdio.h>
void cavaloSimples(int posicaox, int posicaoy)
{
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            posicaoy++;
            printf("Cima\n");
        }
        posicaox++;
        printf("Direita\n");
    }
}
void cavaloAvancado(int posicaox, int posicaoy)
{
    for (int i = 0; i < 2; i++)
    {
        posicaoy++;
        printf("\nCima\n");

        if (i < 1) continue;

        for (int j = 0; j < 1; j++)
        {
            posicaox++;
            printf("\nDireita\n");
        }
        break;
    }
}
void movimentoCavalo()
{

    int posicaox = 2;
    int posicaoy = 1;

    printf("\n Cavalo simples\n");
    cavaloSimples(posicaox, posicaoy);
    printf("\nCavalo avançado");
    cavaloAvancado(posicaox, posicaoy);
}

void bispoRecursao(int posicaox, int posicaoy, int i, int numeroDeCasas)
{

    if (i <= numeroDeCasas)
    {
        printf("Direita\n");
        posicaox++;
        printf("Cima\n");
        posicaoy++;
        bispoRecursao(posicaox + 1, posicaoy, i + 1, numeroDeCasas);
    }
}
void bispoSimples(int posicaox, int posicaoy, int numeroDeCasas)
{
    for (int i = 0; i < numeroDeCasas; i++)
    {
        printf("Direita\n");
        posicaox++;
        printf("Cima\n");
        posicaoy++;
    }
}
void movimentoBispo()
{
    int posicaoy = 3;
    int posicaox = 1;
    int numeroDeCasas = 5;

    printf("\nBispo recursao\n");
    bispoRecursao(posicaox, posicaoy, 1, numeroDeCasas);
    printf("\nBispo simples\n");
    bispoSimples(posicaox, posicaoy, numeroDeCasas);
}

void torreRecursao(int posicaox, int i, int numeroDeCasas)
{

    if (i > numeroDeCasas)
    {
        return;
    }
    printf("Movimento Direita\n");
    torreRecursao(posicaox - 1, i + 1, numeroDeCasas);
}
void torreSimples(int posicaox, int i, int numeroDeCasas)
{

    for (i; i <= numeroDeCasas; i++)
    {
        posicaox++;
        printf("Direita\n");
    }
}
void movimentoTorre()
{
    int posicaoy = 1;
    int posicaox = 1;
    int i = 1;
    int numeroDeCasas = 3;
    printf("\nMovimento torre Recursão\n");
    torreRecursao(posicaox, i, numeroDeCasas);
    printf("\nMovimento Torre Simples\n");
    torreSimples(posicaox, i, numeroDeCasas);
}

void rainhaRecursao(int posicaox, int i, int numeroDeCasas)
{

    if (i > numeroDeCasas)
    {
        return;
    }

    printf("Movimentando Esquerda\n");
    rainhaRecursao(posicaox - 1, i + 1, numeroDeCasas);
}
void rainhaSimples(int posicaox, int i, int numeroDeCasas)
{

    for (i; i <= numeroDeCasas; i++)
    {
        posicaox--;
        printf("Esquerda\n");
    }
}
void movimentoRainha()
{
    int posicaoy = 1;
    int posicaox = 4;
    int i = 1;
    int numeroDeCasas = 2;
    printf("\nrainhaSimples \n");
    rainhaSimples(posicaox, i, numeroDeCasas);
    printf("\nrainhaRecursao\n");
    rainhaRecursao(posicaox, i, numeroDeCasas);
}

int main()
{
    
    printf("\n========== Cavalo ==========\n");
    movimentoCavalo();
    printf("\n========== Bispo ==========\n");
    movimentoBispo();
    printf("\n========== Torre ==========\n");
    movimentoTorre();
    printf("\n========== Rainha ==========\n");
    movimentoRainha();

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
}
