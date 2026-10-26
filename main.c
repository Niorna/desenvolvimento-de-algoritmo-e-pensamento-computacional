#include <stdio.h>

int main() {
    FILE *arquivo;
    char nome[100];
    char codigo[20];
    char localizacao[100];
    char linha[250];
    int opcao;
    int i;

    do {
        printf("\n===== CADASTRO DE EQUIPAMENTOS =====\n");
        printf("1 - Cadastrar equipamento\n");
        printf("2 - Listar equipamentos\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        if (opcao == 1) {
            printf("\nDigite o nome do equipamento: ");
            fgets(nome, sizeof(nome), stdin);

            i = 0;
            while (nome[i] != '\n' && nome[i] != '\0') {
                i++;
            }
            nome[i] = '\0';

            printf("Digite o codigo de identificacao: ");
            fgets(codigo, sizeof(codigo), stdin);

            i = 0;
            while (codigo[i] != '\n' && codigo[i] != '\0') {
                i++;
            }
            codigo[i] = '\0';

            printf("Digite a localizacao: ");
            fgets(localizacao, sizeof(localizacao), stdin);

            i = 0;
            while (localizacao[i] != '\n' && localizacao[i] != '\0') {
                i++;
            }
            localizacao[i] = '\0';

            arquivo = fopen("equipamentos.txt", "a");

            if (arquivo == NULL) {
                printf("Erro ao abrir o arquivo!\n");
            } else {
                fprintf(arquivo,
                        "Nome: %s | Codigo: %s | Localizacao: %s\n",
                        nome, codigo, localizacao);

                fclose(arquivo);

                printf("\nEquipamento cadastrado com sucesso!\n");
            }

        } else if (opcao == 2) {
            arquivo = fopen("equipamentos.txt", "r");

            if (arquivo == NULL) {
                printf("\nNenhum equipamento cadastrado.\n");
            } else {
                printf("\n===== EQUIPAMENTOS CADASTRADOS =====\n");

                while (fgets(linha, sizeof(linha), arquivo) != NULL) {
                    printf("%s", linha);
                }

                fclose(arquivo);
            }

        } else if (opcao == 3) {
            printf("\nEncerrando o programa...\n");

        } else {
            printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}
