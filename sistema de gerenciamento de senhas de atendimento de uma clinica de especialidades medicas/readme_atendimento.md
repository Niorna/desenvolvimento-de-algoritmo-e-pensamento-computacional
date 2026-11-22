# 🏥 Sistema de Senhas — Clínica de Especialidades Médicas

Sistema de gerenciamento de senhas de atendimento para clínicas, feito em **C**, que roda no terminal. Ele classifica o paciente por prioridade, gera o código de espera e mostra no painel a senha em atendimento e a próxima a ser chamada.

![Linguagem](https://img.shields.io/badge/linguagem-C-blue)
![Biblioteca](https://img.shields.io/badge/depend%C3%AAncias-apenas%20stdio.h-green)
![Interface](https://img.shields.io/badge/interface-terminal-lightgrey)

## 📋 Sumário

- [Funcionalidades](#-funcionalidades)
- [Tipos de senha](#-tipos-de-senha)
- [Como compilar e executar](#-como-compilar-e-executar)
- [Como usar](#-como-usar)
- [Exemplo de execução](#-exemplo-de-execução)
- [Como o código funciona](#-como-o-código-funciona)
- [Limitações](#-limitações)
- [Melhorias futuras](#-melhorias-futuras)

## ✨ Funcionalidades

- Cadastro do paciente: nome, idade, gênero, gestação e necessidade especial.
- Classificação automática da senha (**U**, **P** ou **N**).
- Numeração independente para cada tipo (`U001`, `P001`, `N001`, `N002`...).
- Chamada por prioridade: **U → P → N**, respeitando a ordem de chegada dentro de cada tipo.
- Painel exibido a cada ação, com a senha em atendimento e a próxima a ser chamada.
- Código enxuto: um único arquivo e apenas a biblioteca `stdio.h`.

## 🎫 Tipos de senha

| Código | Tipo | Quem recebe | Prioridade |
|:------:|------|-------------|:----------:|
| **U** | Urgente | Idosos com **mais de 80 anos** | 1ª |
| **P** | Preferencial | Gestantes e pessoas com necessidades especiais | 2ª |
| **N** | Normal | Demais pacientes | 3ª |

> Se o paciente se encaixar em mais de um critério (por exemplo, uma gestante com 85 anos), vale a senha de **maior prioridade** (U).

## 🚀 Como compilar e executar

É necessário ter um compilador C instalado, como o [GCC](https://gcc.gnu.org/).

```bash
# Compilar
gcc main.c -o senhas

# Executar (Linux / macOS)
./senhas

# Executar (Windows)
senhas.exe
```

> 💡 No terminal do Windows, se os acentos aparecerem errados, execute `chcp 65001` antes do programa.

## 🕹️ Como usar

Ao iniciar, o programa mostra o painel e o menu principal:

```
1-Retirar senha
2-Registrar atendimento
0-Sair
```

### 1 — Retirar senha

O sistema pergunta, nesta ordem:

| Pergunta | Respostas |
|----------|-----------|
| Nome | Texto livre (até 39 caracteres) |
| Idade | Número inteiro |
| Gênero | `1` Masculino · `2` Feminino |
| Gestante? *(só aparece se o gênero for 2)* | `1` Sim · `2` Não |
| Necessidade especial? | `1` Sim · `2` Não |

Ao final, o código da senha gerada é exibido (ex.: `SENHA GERADA: P001`).

### 2 — Registrar atendimento

- Finaliza o atendimento da senha atual, caso exista.
- Chama a próxima senha da fila, seguindo a prioridade U → P → N.
- Se não houver pacientes aguardando, informa que a fila está vazia.

### 0 — Sair

Encerra o programa.

## 🖥️ Exemplo de execução

```
====== PAINEL ======
Em atendimento: ---
Proxima senha : ---
====================
1-Retirar senha
2-Registrar atendimento
0-Sair
Opcao: 1
Nome: Ana
Idade: 30
Genero digite:
-1 para Masculino
-2 para Femenino
 2
Gestante?
 digite 1 para Sim
 digite 2 para Não
1
Necessidade especial?
 digite 1 para Sim
 digite 2 para Não
2
SENHA GERADA: P001

====== PAINEL ======
Em atendimento: ---
Proxima senha : P001 - Ana
====================
```

Depois de cadastrar também `João` (85 anos, senha `U001`) e `Luís` (40 anos, senha `N001`), a opção **2** chama as senhas na ordem `U001` → `P001` → `N001`, independentemente da ordem em que foram retiradas.

## ⚙️ Como o código funciona

O programa usa estruturas simples, sem alocação dinâmica:

| Elemento | Função |
|----------|--------|
| `nome[3][M][40]` | Guarda os nomes de cada tipo de senha (0 = U, 1 = P, 2 = N) |
| `T[] = "UPN"` | Letras usadas na montagem do código |
| `emit[3]` | Quantidade de senhas emitidas por tipo |
| `cham[3]` | Quantidade de senhas já chamadas por tipo |
| `at`, `an` | Tipo e número da senha em atendimento (`at = -1` quando não há atendimento) |
| `M` | Capacidade máxima de cada fila (100) |

### Funções

| Função | Descrição |
|--------|-----------|
| `proxima()` | Retorna o tipo da próxima senha a ser chamada, procurando na ordem U → P → N, ou `-1` se não houver ninguém |
| `painel()` | Exibe a senha em atendimento e a próxima da fila |
| `retirar()` | Coleta os dados, classifica o paciente e gera a senha |
| `registrar()` | Finaliza o atendimento atual e chama o próximo paciente |
| `main()` | Repete o menu até o usuário escolher sair |

### Regra de classificação

```c
t = idade > 80 ? 0 : (s == 1 || e == 1) ? 1 : 2;
```

- `idade > 80` → **U**
- gestante (`s == 1`) ou necessidade especial (`e == 1`) → **P**
- caso contrário → **N**

Como cada fila é atendida por ordem de chegada (FIFO), basta guardar quantas senhas foram emitidas e quantas já foram chamadas para saber quem é o próximo.

## ⚠️ Limitações

- Cada tipo de senha comporta no máximo **100 pacientes** por execução; depois disso, o sistema exibe `Fila cheia!`.
- Os dados ficam apenas na memória e são perdidos ao fechar o programa.
- As entradas numéricas não são totalmente validadas: uma letra digitada no lugar de um número pode causar comportamento inesperado.
- Valores diferentes de `1` nas perguntas de sim/não são tratados como "não"; no gênero, valores diferentes de `2` são tratados como masculino.
- Senhas preferenciais e normais podem esperar muito caso cheguem pacientes urgentes continuamente.

## 🔮 Melhorias futuras

- [ ] Validação completa das entradas
- [ ] Salvar o histórico de atendimentos em arquivo
- [ ] Relatório de atendimentos do dia
- [ ] Regra para evitar que senhas normais esperem demais
- [ ] Reinício automático das filas a cada dia

## 📄 Licença

Projeto de uso livre para fins educacionais.
