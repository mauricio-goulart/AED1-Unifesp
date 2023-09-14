#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int carro;
    char nome[21];
} Corredor;

int encontrarPosicao(int *ordem_largada, int N, int carro) {
    for (int i = 0; i < N; i++) {
        if (ordem_largada[i] == carro) {
            return i;
        }
    }
    return -1; 
}

int frente(int *ordem_largada, int N, int carro) {
    int posicao = encontrarPosicao(ordem_largada, N, carro);
    if (posicao > 0) {
        return ordem_largada[posicao - 1];
    }
    return -1; 
}

int main() {
    int N;
    scanf("%d", &N);

    Corredor *corredores = (Corredor *)malloc(N * sizeof(Corredor));

    for (int i = 0; i < N; i++) {
        scanf("%d %s", &corredores[i].carro, corredores[i].nome);
    }

    int *ordem_largada = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &ordem_largada[i]);
    }

    int ultrapassagem;
    while (1) {
        scanf("%d", &ultrapassagem);
        if (ultrapassagem == -1) {
            break;
        }

        int p1 = encontrarPosicao(ordem_largada, N, ultrapassagem);
        int num = frente(ordem_largada, N, ultrapassagem);
        int p2 = encontrarPosicao(ordem_largada, N, num);

        if (p1 >= 0 && p2 >= 0) {
            int temp = ordem_largada[p1];
            ordem_largada[p1] = ordem_largada[p2];
            ordem_largada[p2] = temp;
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("%d %s\n", corredores[ordem_largada[i] - 1].carro, corredores[ordem_largada[i] - 1].nome);
    }

    free(corredores);
    free(ordem_largada);

    return 0;
}
