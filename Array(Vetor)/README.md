# Manipulação de Vetor de 20 Números Inteiros em C

## Criador do código: Leonardo João Ramos Gomes

## 📌 Objetivo

Este projeto tem como objetivo aplicar, na prática, os conceitos de:

- Arrays (vetores);
- Estruturas de repetição (`for`);
- Estruturas condicionais (`if` / `else if`);
- Entrada de dados pelo teclado (`scanf`);
- Operações matemáticas básicas (soma, contagem e média).

O programa lê **20 números inteiros** digitados pelo usuário, armazena-os em um vetor e realiza um conjunto de cálculos e verificações sobre esses valores.

## ⚙️ Funcionalidades

O programa realiza as seguintes tarefas:

1. Lê 20 números inteiros e armazena-os em um vetor;
2. Calcula e exibe a soma dos elementos múltiplos de 3;
3. Calcula e exibe a média dos elementos pares;
4. Informa a quantidade de números positivos e a quantidade de números negativos (o valor `0` não é contado como positivo nem como negativo);
5. Determina e exibe o maior e o menor valor armazenado no vetor;
6. Exibe, ao final, todos os elementos armazenados no vetor.

## 🧠 Lógica utilizada

- O vetor é declarado com tamanho fixo de **20 posições** (`int vetor[20]`).
- Um primeiro laço `for` é usado exclusivamente para **ler e armazenar** os 20 números digitados pelo usuário.
- Os valores `maior` e `menor` são inicializados com o **primeiro elemento** do vetor (`vetor[0]`), servindo como ponto de partida para as comparações.
- Um segundo laço `for` percorre o vetor **uma única vez**, realizando todas as verificações necessárias dentro do mesmo laço, por eficiência:
  - Verifica se o elemento é múltiplo de 3 (`vetor[i] % 3 == 0`) e acumula a soma;
  - Verifica se o elemento é par (`vetor[i] % 2 == 0`), somando seu valor e contando quantos pares existem (para calcular a média depois);
  - Verifica se o elemento é positivo, negativo ou zero, incrementando o contador correspondente (zero não entra em nenhuma contagem);
  - Compara o elemento atual com `maior` e `menor`, atualizando-os quando necessário.
- Antes de calcular a média dos pares, o programa **verifica se existe ao menos um número par** (`quantPar > 0`). Caso não exista nenhum, evita a divisão por zero e exibe uma mensagem informando que não há números pares no vetor.
- Por fim, um terceiro laço `for` percorre o vetor novamente apenas para **exibir todos os elementos armazenados**.

## 🛠️ Instruções para compilar e executar

### Pré-requisitos

Ter um compilador C instalado, como o **GCC**.

### Compilação

No terminal, dentro da pasta do projeto, execute:

```bash
gcc vetor_corrigido.c -o vetor
```

### Execução

**Linux / macOS:**

```bash
./vetor
```

**Windows (cmd ou PowerShell):**

```bash
vetor.exe
```

O programa solicitará a digitação de 20 números inteiros, um por vez, e em seguida exibirá todos os resultados calculados.

## 📥 Exemplo de entrada e saída

### Entrada (20 números digitados pelo usuário)

```
25, 28, 19, 16, 20, 17, 12, 8, 9, 5, 4, 1, 3, 6, 63, 62, 69, 15, 30, 15
```

### Saída gerada pelo programa

```
Preenchimento do Vetor
Digite o 1 numero: 25
Digite o 2 numero: 28
...
Digite o 20 numero: 15

Resultados
Soma dos elementos multiplos de 3: 219
Media dos elementos pares: 19.20
Quantidade de numeros positivos: 20
Quantidade de numeros negativos: 0
Maior valor do vetor: 69
Menor valor do vetor: 1

Elementos armazenados no vetor
vetor[0] = 25
vetor[1] = 28
...
vetor[19] = 15
```

## 🖥️ Captura de tela da execução

A imagem abaixo comprova a execução real do programa, com a entrada dos 20 números e a exibição de todos os resultados calculados:

![Execução do programa no terminal](execucao.png)

## 📁 Estrutura do repositório

```
.
├── vetor_corrigido.c   # Código-fonte em C
├── README.md           # Este arquivo
└── execucao.png        # Captura de tela da execução do programa
```
