#include <stdio.h>

int main(void) {
    int vetor[20];
    int i;
    int somaMult3 = 0;
    int somaPar = 0;
    int quantPar = 0;
    int quantPos = 0;
    int quantNeg = 0;
    int maior, menor;

    // Leitura dos 20 num int armazenados no vetor
    printf("Preenchimento do Vetor\n");
    for (i = 0; i < 20; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Inicializa maior e menor com primeiro elemento do vetor
    maior = vetor[0];
    menor = vetor[0];

    // Realizando as verificações e calculos necessarios, percorrendo o vetor uma vez
    for (i = 0; i < 20; i++) {
        // somaMult3
        if (vetor[i] % 3 == 0) {
            somaMult3 += vetor[i];
        }
        // somaPar e quantPar (para fazer a media depois)
        if (vetor[i] % 2 == 0) {
            somaPar += vetor[i];
            quantPar++;
        }
        // quantPos e quantNeg (zero não é contado)
        if (vetor[i] > 0) {
            quantPos++;
        } else if (vetor[i] < 0) {
            quantNeg++;
        }
        // verificar maior valor
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        // verificar menor valor
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    // Exibir resultados
    printf("Resultados\n");

    // somaMult3
    printf("Soma dos elementos multiplos de 3: %d\n", somaMult3);

    // media dos elementos pares (tratando div por 0)
    if (quantPar > 0) {
        float mediaPares = (float) somaPar / quantPar;
        printf("Media dos elementos pares: %.2f\n", mediaPares);
    } else {
        printf("Media dos elementos pares: nao existem numeros pares no vetor.\n");
    }

    // quantPos e quantNeg
    printf("Quantidade de numeros positivos: %d\n", quantPos);
    printf("Quantidade de numeros negativos: %d\n", quantNeg);

    // maior e menor valor
    printf("Maior valor do vetor: %d\n", maior);
    printf("Menor valor do vetor: %d\n", menor);

    // exibir todos os elementos armazenados no vetor
    printf("Elementos armazenados no vetor\n");
    for (i = 0; i < 20; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
