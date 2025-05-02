#include <stdio.h>

void movimentoCavalo()
{
    int posicaox = 2;
    int posicaoy = 1;

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            posicaoy++;
            printf("Cima\n");
        }
        posicaox++;
        printf("Direita\n");
    }
    printf("A nova posicao do cavalo e: %d, %d", posicaox, posicaoy);
}
void cavaloAvancado() {}
void movimentoBispo()
{
    int posicaoy = 3;
    int posicaox = 1;

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            posicaoy++;
            printf("Cima\n");
        }

        posicaox++;
        printf("Direita\n");
    }
}
void bispoRecursao() {}
void movimentoTorre()
{
    int posicaoy = 1;
    int posicaox = 1;

}
void torreRecursao() {}
void torreSimples(int posicaox, int i, int numeroDeCasas) {
    
    for (i; i <= numeroDeCasas; i++)
    {
        posicaox++;
        printf("Direita\n");
    }
    
}
void rainhaRecursao(int posicaox, int i, int numeroDeCasas)
{
    
    if(i > numeroDeCasas) {
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
    printf("Rodando movivento simples \n");
    rainhaSimples(posicaox, i, numeroDeCasas);
    printf("Rodando movimento de Recursao");
    rainhaRecursao(posicaox, i, numeroDeCasas);
}

int main()
{
    // movimentoCavalo();
    // movimentoCavalo();
    // cavaloAvancado();
    // movimentoBispo();
    // bispoRecursao();
    // movimentoTorre();
    // torreRecursao();
    movimentoRainha();

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
}
