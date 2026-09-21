# Sistema Inteligente de Monitoramento Industrial

Programa em linguagem C que monitora a temperatura de uma máquina, utilizando
laços de repetição `while` e `do...while`, com validação de entradas, cálculos
estatísticos, condição de segurança e relatório final.

## Arquivos

- `monitoramento.c` — código-fonte do programa.
- `README.md` — este arquivo.

## Objetivo

Desenvolver um programa que monitore a temperatura de uma máquina, com
validação de entradas, cálculos e condições de segurança, encerrando
automaticamente o monitoramento ao identificar um risco.

## Funcionalidades implementadas

- Solicita e valida o limite de temperatura (`do...while`): rejeita valores
  não numéricos e valores menores ou iguais a zero.
- Recebe diversas temperaturas do sensor em um laço `while`.
- Trata entradas inválidas (texto/valor não numérico) sem interromper o
  programa nem contar como leitura válida.
- Calcula média, maior e menor temperatura entre as leituras válidas.
- Conta quantas temperaturas ficaram acima do limite.
- Encerra automaticamente o monitoramento ao identificar **3 temperaturas
  consecutivas** acima do limite (a contagem de consecutivas zera sempre que
  uma leitura fica dentro do limite).
- Exibe um relatório final com todas as métricas calculadas.

## Como compilar e executar

```bash
gcc -Wall -Wextra -o monitoramento monitoramento.c
./monitoramento
```

O programa pede primeiro o limite de temperatura e, em seguida, as leituras
do sensor, uma por vez, até detectar 3 leituras consecutivas acima do limite.

## Estrutura do código

- Uso de `do...while` para garantir que o limite de temperatura seja
  validado antes de prosseguir.
- Uso de `while` como laço principal de leitura, controlado pela variável
  `consecutivas` (contador de leituras seguidas acima do limite).
- Limpeza do buffer de entrada (`while (getchar() != '\n');`) após cada
  leitura, para evitar loops infinitos com entradas inválidas.
- Variáveis com nomes descritivos (`limite`, `temperatura`, `soma`, `media`,
  `maior`, `menor`, `contador`, `acimaLimite`, `consecutivas`) e comentários
  explicando cada bloco de lógica.

## Evidências dos testes

### Teste 1 — Fluxo normal (limite 40°C, 3 leituras seguidas acima)

Entrada: `40, 42, 45, 43, 30`

```
Digite o limite de temperatura (C): 
Limite definido: 40.00 C
Temperatura #1: -> Atencao! Acima do limite. (1 consecutiva(s))
Temperatura #2: -> Atencao! Acima do limite. (2 consecutiva(s))
Temperatura #3: -> Atencao! Acima do limite. (3 consecutiva(s))

3 temperaturas consecutivas acima do limite detectadas.
Encerrando monitoramento automaticamente...

=== Relatorio Final ===
Total de leituras validas : 3
Temperatura media         : 43.33 C
Maior temperatura         : 45.00 C
Menor temperatura         : 42.00 C
Leituras acima do limite  : 3
```
Confirma que a contagem de consecutivas funciona e o programa para
imediatamente ao atingir 3, ignorando as leituras restantes (43, 30).

### Teste 2 — Alternância de valores e entrada inválida (limite 50°C)

Entrada: `50, 30, 55, 60, 20, 58, 62, abc, 70`

```
Temperatura #1: -> Temperatura normal.
Temperatura #2: -> Atencao! Acima do limite. (1 consecutiva(s))
Temperatura #3: -> Atencao! Acima do limite. (2 consecutiva(s))
Temperatura #4: -> Temperatura normal.
Temperatura #5: -> Atencao! Acima do limite. (1 consecutiva(s))
Temperatura #6: -> Atencao! Acima do limite. (2 consecutiva(s))
Temperatura #7: Entrada invalida! Digite um numero.
Temperatura #7: -> Atencao! Acima do limite. (3 consecutiva(s))

=== Relatorio Final ===
Total de leituras validas : 7
Temperatura media         : 50.71 C
Maior temperatura         : 70.00 C
Menor temperatura         : 20.00 C
Leituras acima do limite  : 5
```
Confirma que: (1) o contador de consecutivas zera ao receber uma leitura
normal; (2) a entrada inválida ("abc") é rejeitada e não é contabilizada,
sem travar o programa; (3) o programa aceita a próxima leitura válida (70)
para completar a 3ª consecutiva.

### Teste 3 — Validação do limite de temperatura

Entrada do limite: `-10, 0, 35` (as duas primeiras rejeitadas)

```
Digite o limite de temperatura (C): O limite deve ser um numero positivo.
Digite o limite de temperatura (C): O limite deve ser um numero positivo.
Digite o limite de temperatura (C): 
Limite definido: 35.00 C
```
Confirma que o `do...while` de validação do limite rejeita valores
negativos e zero, só avançando quando um valor positivo é informado.

Questão final de reflexão

Por que você escolheu while, do...while ou uma combinação das duas estruturas? Em qual parte do algoritmo a diferença entre testar a condição antes ou depois da execução foi importante para sua solução?

Optei por uma combinação das duas estruturas, porque elas resolvem problemas diferentes dentro do algoritmo.

Usei do...while na validação do limite de temperatura porque, nesse trecho, eu preciso executar a leitura pelo menos uma vez antes de ter qualquer valor para avaliar — não existe um "limite anterior" que eu possa testar antes de pedir o primeiro número ao usuário. O do...while executa o bloco (pede o valor) e só depois verifica se ele é válido e positivo, repetindo o processo enquanto a condição falhar. Se eu tivesse usado um while aqui, precisaria inicializar limite artificialmente com algum valor "inválido" só para a primeira comparação passar, o que deixaria o código menos natural.

Já no laço principal de leitura das temperaturas usei while, porque antes de cada nova leitura eu já tenho uma informação relevante para testar: a variável consecutivas (quantas leituras seguidas ficaram acima do limite). Faz sentido verificar essa condição antes de pedir mais uma temperatura, pois é exatamente essa checagem que decide se o monitoramento deve continuar ou parar. Usar do...while aqui poderia fazer o programa pedir uma leitura "a mais" mesmo depois que a condição de parada (3 consecutivas acima do limite) já tivesse sido satisfeita, o que não faz sentido para um sistema de segurança que deve encerrar imediatamente ao identificar o risco.

Ou seja, a diferença entre testar a condição antes (while) ou depois (do...while) foi decisiva em dois pontos do algoritmo:

Validação do limite — precisava garantir pelo menos uma execução (pedir o valor) antes de existir algo para validar, por isso do...while.
Parada automática do monitoramento — precisava impedir qualquer leitura extra depois que a condição de risco (3 consecutivas) já tivesse sido atingida, por isso while, que verifica a condição antes de executar o corpo do laço.
