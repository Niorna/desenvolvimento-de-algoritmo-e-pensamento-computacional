#include <stdio.h>
#include <math.h>

int main()
{
    int continuar = 1;
    int opcao;

    while (continuar) {

        printf("O QUE DESEJA FAZER?(digite o número correspondente)\n 1 - IMC\n 2 - Área de figuras\n 3 - Soma\n 4 - Subtração\n 5 - Multiplicação\n 6 - Divisão\n 7 - Média aritmética\n 8 - Porcentagem\n 9 - Regra de três\n 10 - Celsius para Fahrenheit\n 11 - Fahrenheit para Celsius\n 12 - Perímetro do retângulo\n 13 - Volume do cubo\n 14 - Juros simples\n 15 - Desconto\n 16 - Velocidade média\n 17 - Consumo de combustível\n 18 - Par ou ímpar\n 19 - Maior entre dois números\n 20 - Potência\n 0 - Encerrar\n Digite uma opção:\n ");

        scanf("%d", &opcao);

        switch (opcao) {

            case 0:
                printf("Obrigado pelo seu tempo!!\n");
                continuar = 0;
                break;

            case 1: { // IMC
                double p, a, imc;
                printf("Digite seu peso(Kg): ");
                scanf("%lf", &p);
                printf("Dígite sua altura(cm): ");
                scanf("%lf", &a);

                imc = p / pow(a / 100, 2);
                printf("Seu IMC é %.2lf\n", imc);

                if (imc <= 18.5) {
                    printf("Tu estás desnutrido\n");
                } else if (imc <= 24.9) {
                    printf("Seu peso está normal\n");
                } else if (imc <= 29.9) {
                    printf("Você está com sobrepeso\n");
                } else if (imc <= 34.9) {
                    printf("Você está com obesidade I\n");
                }
                break;
            }

            case 2: { // Área de figuras
                int forma;
                printf("Digite a forma que deseja saber a área: 1 - quadrado ou retângulo 2 - circulo 3 - triângulo\n");
                scanf("%d", &forma);

                if (forma == 1) {
                    double largura, altura, qr;
                    printf("Digite a largura: ");
                    scanf("%lf", &largura);
                    printf("Dígite altura: ");
                    scanf("%lf", &altura);
                    qr = largura * altura;
                    printf("%.2lf\n", qr);
                } else if (forma == 2) {
                    double raio, c;
                    printf("Digite o raio: ");
                    scanf("%lf", &raio);
                    c = 3.14 * (raio * raio);
                    printf("%.2lf\n", c);
                } else if (forma == 3) {
                    double b, h, t;
                    printf("Digite o valor da base: ");
                    scanf("%lf", &b);
                    printf("Digite o valor da altura\n");
                    scanf("%lf", &h);
                    t = (b * h) / 2;
                    printf("%.2lf\n", t);
                }
                break;
            }

            case 3: { // Soma
                double n1, n2, soma;
                printf("Digite o primeiro número:\n");
                scanf("%lf", &n1);
                printf("Digite o segundo número:\n");
                scanf("%lf", &n2);
                soma = n1 + n2;
                printf("Resultado:\n%.2lf\n", soma);
                break;
            }

            case 4: { // Subtração
                double n1, n2, sub;
                printf("Digite o primeiro número:\n");
                scanf("%lf", &n1);
                printf("Digite o segundo número:\n");
                scanf("%lf", &n2);
                sub = n1 - n2;
                printf("Resultado:\n%.2lf\n", sub);
                break;
            }

            case 5: { // Multiplicação
                double n1, n2, mult;
                printf("Digite o primeiro número:\n");
                scanf("%lf", &n1);
                printf("Digite o segundo número:\n");
                scanf("%lf", &n2);
                mult = n1 * n2;
                printf("Resultado:\n%.2lf\n", mult);
                break;
            }

            case 6: { // Divisão
                double n1, n2, div;
                printf("Digite o dividendo:\n");
                scanf("%lf", &n1);
                printf("Digite o divisor:\n");
                scanf("%lf", &n2);

                if (n2 != 0) {
                    div = n1 / n2;
                    printf("Resultado:\n%.2lf\n", div);
                } else {
                    printf("Não é possível dividir por zero.\n");
                }
                break;
            }

            case 7: { // Média aritmética
                double n1, n2, media;
                printf("Digite o primeiro número:\n");
                scanf("%lf", &n1);
                printf("Digite o segundo número:\n");
                scanf("%lf", &n2);
                media = (n1 + n2) / 2;
                printf("Média:\n%.2lf\n", media);
                break;
            }

            case 8: { // Porcentagem
                double valor, porcentagem, resultado;
                printf("Digite o valor:\n");
                scanf("%lf", &valor);
                printf("Digite a porcentagem:\n");
                scanf("%lf", &porcentagem);
                resultado = (valor * porcentagem) / 100;
                printf("Resultado:\n%.2lf\n", resultado);
                break;
            }

            case 9: { // Regra de três
                double a1, b1, c1, x;
                printf("Regra de três: A está para B assim como C está para X.\n");
                printf("Digite A:\n");
                scanf("%lf", &a1);
                printf("Digite B:\n");
                scanf("%lf", &b1);
                printf("Digite C:\n");
                scanf("%lf", &c1);
                x = (b1 * c1) / a1;
                printf("Resultado de X:\n%.2lf\n", x);
                break;
            }

            case 10: { // Celsius para Fahrenheit
                double celsius, fahrenheit;
                printf("Digite a temperatura em Celsius:\n");
                scanf("%lf", &celsius);
                fahrenheit = (celsius * 9 / 5) + 32;
                printf("Temperatura em Fahrenheit:\n%.2lf\n", fahrenheit);
                break;
            }

            case 11: { // Fahrenheit para Celsius
                double fahrenheit, celsius;
                printf("Digite a temperatura em Fahrenheit:\n");
                scanf("%lf", &fahrenheit);
                celsius = (fahrenheit - 32) * 5 / 9;
                printf("Temperatura em Celsius:\n%.2lf\n", celsius);
                break;
            }

            case 12: { // Perímetro do retângulo
                double largura, altura, perimetro;
                printf("Digite a largura do retângulo:\n");
                scanf("%lf", &largura);
                printf("Digite a altura do retângulo:\n");
                scanf("%lf", &altura);
                perimetro = 2 * (largura + altura);
                printf("Perímetro:\n%.2lf\n", perimetro);
                break;
            }

            case 13: { // Volume do cubo
                double lado, volume;
                printf("Digite o lado do cubo:\n");
                scanf("%lf", &lado);
                volume = pow(lado, 3);
                printf("Volume:\n%.2lf\n", volume);
                break;
            }

            case 14: { // Juros simples
                double capital, taxa, tempo, juros;
                printf("Digite o capital:\n");
                scanf("%lf", &capital);
                printf("Digite a taxa de juros em porcentagem:\n");
                scanf("%lf", &taxa);
                printf("Digite o tempo:\n");
                scanf("%lf", &tempo);
                juros = capital * (taxa / 100) * tempo;
                printf("Juros simples:\n%.2lf\n", juros);
                break;
            }

            case 15: { // Desconto
                double valor, desconto, final_valor;
                printf("Digite o valor do produto:\n");
                scanf("%lf", &valor);
                printf("Digite o desconto em porcentagem:\n");
                scanf("%lf", &desconto);
                final_valor = valor - (valor * desconto / 100);
                printf("Valor final:\n%.2lf\n", final_valor);
                break;
            }

            case 16: { // Velocidade média
                double distancia, tempo, velocidade;
                printf("Digite a distância em km:\n");
                scanf("%lf", &distancia);
                printf("Digite o tempo em horas:\n");
                scanf("%lf", &tempo);
                velocidade = distancia / tempo;
                printf("Velocidade média:\n%.2lf\n", velocidade);
                break;
            }

            case 17: { // Consumo de combustível
                double distancia, litros, consumo;
                printf("Digite a distância percorrida em km:\n");
                scanf("%lf", &distancia);
                printf("Digite a quantidade de litros consumidos:\n");
                scanf("%lf", &litros);
                consumo = distancia / litros;
                printf("Consumo em km/l:\n%.2lf\n", consumo);
                break;
            }

            case 18: { // Par ou ímpar
                int numero;
                printf("Digite um número inteiro:\n");
                scanf("%d", &numero);

                if (numero % 2 == 0) {
                    printf("O número é par.\n");
                } else {
                    printf("O número é ímpar.\n");
                }
                break;
            }

            case 19: { // Maior entre dois números
                double n1, n2;
                printf("Digite o primeiro número:\n");
                scanf("%lf", &n1);
                printf("Digite o segundo número:\n");
                scanf("%lf", &n2);

                if (n1 > n2) {
                    printf("O maior número é:\n%.2lf\n", n1);
                } else if (n2 > n1) {
                    printf("O maior número é:\n%.2lf\n", n2);
                } else {
                    printf("Os dois números são iguais.\n");
                }
                break;
            }

            case 20: { // Potência
                double base, expoente, potencia;
                printf("Digite a base:\n");
                scanf("%lf", &base);
                printf("Digite o expoente:\n");
                scanf("%lf", &expoente);
                potencia = pow(base, expoente);
                printf("Resultado:\n%.2lf\n", potencia);
                break;
            }

            default:
                printf("Opção inválida.\n");
                break;
        }
    }

    printf("Calculadora encerrada. Obrigado por utilizar!\n");
    return 0;
}
