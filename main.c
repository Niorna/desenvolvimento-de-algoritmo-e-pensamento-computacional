/* Senhas da clinica: U (idoso > 80), P (gestante/necessidade especial), N (normal) */
#include <stdio.h>
#define M 100

char nome[3][M][40], T[] = "UPN";
int emit[3], cham[3], at = -1, an;   /* emitidas, chamadas, atendimento atual */

int proxima() {                      /* prioridade: U > P > N */
    for (int i = 0; i < 3; i++) if (cham[i] < emit[i]) return i;
    return -1;
}

void painel() {
    int p = proxima();
    printf("\n====== PAINEL ======\n");
    if (at >= 0) printf("Em atendimento: %c%03d - %s\n", T[at], an + 1, nome[at][an]);
    else         printf("Em atendimento: ---\n");
    if (p >= 0)  printf("Proxima senha : %c%03d - %s\n", T[p], cham[p] + 1, nome[p][cham[p]]);
    else         printf("Proxima senha : ---\n");
    printf("====================\n");
}

void retirar() {
    char n[40];
    int idade, t, i, g, s = 2, e;
    printf("Nome: ");               scanf(" %39[^\n]", n);
    printf("Idade: ");              scanf("%d", &idade);
    printf("Genero digite:\n-1 para Masculino \n-2 para Femenino\n "); scanf("%d", &g);
    if (g == 2) { printf("Gestante?\n digite 1 para Sim\n digite 2 para Não\n"); scanf("%d", &s); }
    printf("Necessidade especial?\n digite 1 para Sim\n digite 2 para Não\n"); scanf("%d", &e);
    t = idade > 80 ? 0 : (s == 1 || e == 1) ? 1 : 2;
    if (emit[t] == M) { puts("Fila cheia!"); return; }
    for (i = 0; (nome[t][emit[t]][i] = n[i]); i++);
    printf("SENHA GERADA: %c%03d\n", T[t], ++emit[t]);
}

void registrar() {
    int p = proxima();
    if (at >= 0) printf("Atendimento %c%03d finalizado.\n", T[at], an + 1);
    at = -1;
    if (p < 0) { puts("Nao ha pacientes aguardando."); return; }
    at = p; an = cham[p]++;
    printf("Chamando %c%03d - %s\n", T[at], an + 1, nome[at][an]);
}

int main() {
    int op;
    for (;;) {
        painel();
        printf("1-Retirar senha\n2-Registrar atendimento\n0-Sair\nOpcao: ");
        if (scanf("%d", &op) != 1 || op == 0) break;
        if (op == 1) retirar(); else if (op == 2) registrar();
    }
    return 0;
}