#include <stdio.h>

void movimentoCavalo() {
    int posicaox = 2;
    int posicaoy = 1;

    for(int i = 0; i < 1; i++) 
    {
        for(int j = 0; j < 1; j++) 
        {
            posicaoy++;
            printf("Cima\n");
        }
        posicaox++;
        printf("Direita\n");
    }
    printf("A nova posicao do cavalo e: %d, %d", posicaox, posicaoy);
}

void movimentoBispo() {
    int posicaoy = 3;
    int posicaox = 1;

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 1; i++)
        {
            posicaoy++;
            printf("Cima\n");
        }
        
        posicaox++;
        printf("Direita\n");
    
    }
    
}
void movimentoTorre() {
    int posicaoy = 1;
    int posicaox = 1;

    for (int i = 0; i < 1; i++)
    {
        posicaox++;
        printf("Direita\n");
    }
    

}
void movimentoRainha() {
    int posicaoy = 4;
    int posicaox = 1;
    
    for (int i = 0; i < 1; i++)
    {
        posicaox--;

    printf("Esquerda\n");
    }
    

}



int main() {
    movimentoCavalo();

    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
}


