<div align="center">

# 🧮 Calculadora Multifuncional em C

![C](https://img.shields.io/badge/Linguagem-C-blue?style=for-the-badge&logo=c)
![GCC](https://img.shields.io/badge/Compilador-GCC-informational?style=for-the-badge&logo=gnu)
![Status](https://img.shields.io/badge/Status-Conclu%C3%ADdo-brightgreen?style=for-the-badge)

<p align="center">
  Uma aplicação interativa via linha de comando (CLI) que reúne 20 operações matemáticas, financeiras, físicas e utilitárias desenvolvida em linguagem C.
</p>

[Recursos](#-funcionalidades-implementadas) • 
[Operações](#-relação-das-20-funções) • 
[Conceitos C](#-conceitos-de-programação-aplicados) • 
[Compilação](#-como-compilar-e-executar) • 
[Autor](#-autor)

</div>

---

## 👨‍🎓 Autor

* **Estudante:** [Seu Nome Completo Aqui]
* **Matrícula:** [Sua Matrícula/ID Aqui]
* **Curso:** [Nome do Seu Curso]
* **Instituição:** [Nome da Sua Faculdade/Universidade]

---

## 📌 Descrição do Projeto

O **Calculadora Multifuncional em C** é um projeto acadêmico desenvolvido para proporcionar uma interface acessível e contínua via linha de comando. O programa utiliza uma estrutura baseada em menu para permitir ao usuário executar múltiplos cálculos dinâmicos sem a necessidade de reiniciar a aplicação a cada operação.

### 🎯 Objetivo
Centralizar rotinas essenciais de cálculo em uma única ferramenta e demonstrar a aplicação prática de conceitos fundamentais da programação estruturada em C, como controle de fluxo, manipuladores de E/S e funções matemáticas.

---

## ✨ Funcionalidades Implementadas

- [x] **Navegação Contínua:** Menu interativo baseado em laço de repetição.
- [x] **Tratamento de Exceções:** Validação contra divisão por zero.
- [x] **Diagnóstico de Saúde:** Classificação automática do resultado de IMC.
- [x] **Geometria Dinâmica:** Cálculo de área para diferentes figuras (Quadrado/Retângulo, Círculo e Triângulo).
- [x] **Formatador Decimal:** Exibição padronizada de resultados com precisão de duas casas decimais (`%.2lf`).

---

## 📋 Relação das 20 Funções

| Opção | Operação | Descrição / Fórmula |
| :---: | :--- | :--- |
| `0` | **Encerrar** | Finaliza a execução do programa. |
| `1` | **IMC** | Compara peso e altura e exibe a faixa de saúde ($\frac{peso}{altura^2}$). |
| `2` | **Área de Figuras** | Calcula área de Quadrado/Retângulo ($l \cdot h$), Círculo ($\pi \cdot r^2$) e Triângulo ($\frac{b \cdot h}{2}$). |
| `3` | **Soma** | Realiza a adição entre dois números reais ($n_1 + n_2$). |
| `4` | **Subtração** | Calcula a diferença entre dois números reais ($n_1 - n_2$). |
| `5` | **Multiplicação** | Retorna o produto entre dois números reais ($n_1 \cdot n_2$). |
| `6` | **Divisão** | Razão ($n_1 / n_2$) com verificação preventiva de divisor zero. |
| `7` | **Média Aritmética** | Média simples entre dois valores ($\frac{n_1 + n_2}{2}$). |
| `8` | **Porcentagem** | Calcula a fração percentual de um valor ($\frac{valor \cdot \%}{100}$). |
| `9` | **Regra de Três** | Resolve a proporção direta de três valores ($X = \frac{B \cdot C}{A}$). |
| `10` | **Celsius para Fahrenheit** | Converte graus Celsius para Fahrenheit ($F = C \cdot \frac{9}{5} + 32$). |
| `11` | **Fahrenheit para Celsius** | Converte Fahrenheit para graus Celsius ($C = (F - 32) \cdot \frac{5}{9}$). |
| `12` | **Perímetro do Retângulo** | Determina o contorno do retângulo ($2 \cdot (largura + altura)$). |
| `13` | **Volume do Cubo** | Volume tridimensional a partir do lado ($lado^3$). |
| `14` | **Juros Simples** | Calcula o rendimento de juros ($J = C \cdot i \cdot t$). |
| `15` | **Desconto** | Aplica abatimento percentual sobre valor inicial. |
| `16` | **Velocidade Média** | Razão entre distância e tempo ($\frac{\Delta s}{\Delta t}$). |
| `17` | **Consumo de Combustível** | Eficiência em $km/l$ ($\frac{distância}{litros}$). |
| `18` | **Par ou Ímpar** | Determina paridade inteira utilizando operador de resto (`%`). |
| `19` | **Maior Número** | Compara dois números e retorna o maior valor ou igualdade. |
| `20` | **Potência** | Eleva uma base a determinado expoente ($base^{expoente}$). |

---

## 🛠️ Bibliotecas Utilizadas

* `<stdio.h>` (**Standard Input/Output**): Manipulação de entrada (`scanf`) e saída (`printf`) de dados.
* `<math.h>` (**C Math Library**): Suporte a operações matemáticas como a função `pow()`.

---

## 🧠 Conceitos de Programação Aplicados

```mermaid
flowchart TD
    A[Início - main] --> B[Entrada no Loop - while]
    B --> C[Exibição do Menu & Entrada via scanf]
    C --> D{Seleção via switch-case}
    D -->|Opção 1 a 20| E[Condicionais - if/else]
    E --> F[Cálculos e Biblioteca math.h]
    F --> B
    D -->|Opção 0| G[Encerramento - break]
