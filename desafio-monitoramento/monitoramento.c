#include <stdio.h>

int main(void) {
    float limite;
    float temperatura;
    float soma = 0.0f;
    float media = 0.0f;
    float maior = 0.0f, menor = 0.0f;
    int contador = 0;        /* total de leituras validas */
    int acimaLimite = 0;     /* total de leituras acima do limite */
    int consecutivas = 0;    /* leituras consecutivas acima do limite */
    int primeiraLeitura = 1; /* controla inicializacao de maior/menor */
    int valido;

    printf("=== Sistema Inteligente de Monitoramento Industrial ===\n\n");

    /*Limite da temperatura*/
    do {
        printf("Digite o limite de temperatura (C): ");
        valido = scanf("%f", &limite);
        /* limpa o buffer de entrada, mesmo em caso de erro */
        while (getchar() != '\n');
        if (!valido) {
            printf("Entrada invalida! Digite um numero.\n");
        } else if (limite <= 0) {
            printf("O limite deve ser um numero positivo.\n");
        }
    } while (!valido || limite <= 0);
    printf("\nLimite definido: %.2f C\n", limite);
    printf("Digite as temperaturas do sensor.\n");
    printf("O monitoramento para automaticamente apos 3 leituras\n");
    printf("consecutivas acima do limite.\n\n");
    /*Laço principal*/
    while (consecutivas < 3) {
        printf("Temperatura #%d: ", contador + 1);
        valido = scanf("%f", &temperatura);
        while (getchar() != '\n')
            ;
        if (!valido) {
            printf("Entrada invalida! Digite um numero.\n\n");
            continue; /* nao conta como leitura valida */
        }
        contador++;
        soma += temperatura;
        if (primeiraLeitura) {
            maior = temperatura;
            menor = temperatura;
            primeiraLeitura = 0;
        } else {
            if (temperatura > maior) {
                maior = temperatura;
            }
            if (temperatura < menor) {
                menor = temperatura;
            }
        }
        if (temperatura > limite) {
            acimaLimite++;
            consecutivas++;
            printf("  -> Atencao! Acima do limite. (%d consecutiva(s))\n\n", consecutivas);
        } else {
            consecutivas = 0; /* zera a contagem das consecutivas */
            printf("  -> Temperatura normal.\n\n");
        }
    }
    printf("3 temperaturas consecutivas acima do limite detectadas.\n");
    printf("Encerrando monitoramento automaticamente...\n");
    media = soma / contador;

    /*Relatorio final*/
    printf("\n=== Relatorio Final ===\n");
    printf("Total de leituras validas : %d\n", contador);
    printf("Temperatura media         : %.2f C\n", media);
    printf("Maior temperatura         : %.2f C\n", maior);
    printf("Menor temperatura         : %.2f C\n", menor);
    printf("Leituras acima do limite  : %d\n", acimaLimite);

    return 0;
}
