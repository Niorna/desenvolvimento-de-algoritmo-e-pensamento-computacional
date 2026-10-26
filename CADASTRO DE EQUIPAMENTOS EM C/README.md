# Cadastro de Equipamentos em C

## Descrição
Programa desenvolvido em linguagem C para cadastrar e consultar equipamentos de um laboratório de informática. Os dados são armazenados no arquivo de texto `equipamentos.txt`.

## Funcionalidades
- Cadastrar equipamento com nome, código de identificação e localização.
- Listar todos os equipamentos cadastrados.
- Sair do programa.
- Preservar os registros anteriores ao cadastrar novos equipamentos.

## Recursos utilizados
- `stdio.h` para entrada, saída e manipulação de arquivos.
- `if`, `else if` e `else` para controlar as opções do menu.
- `do while` para repetir o menu até o usuário escolher sair.
- `fopen()` para abrir o arquivo.
- `fprintf()` para gravar os dados.
- `fgets()` para ler os dados e os registros.
- `fclose()` para fechar o arquivo.

O programa não utiliza `string.h` nem `switch/case`.

## Como compilar
É necessário ter um compilador C, como o GCC.

No terminal, dentro da pasta do projeto, execute:

```bash
gcc main.c -o cadastro
```

No Windows, também é possível executar:

```bash
gcc main.c -o cadastro.exe
```

## Como executar
Linux/macOS:

```bash
./cadastro
```

Windows:

```bash
cadastro.exe
```

## Arquivos do projeto
- `main.c`: código-fonte do programa.
- `README.md`: instruções e descrição do projeto.
- `equipamentos.txt`: exemplo de equipamentos cadastrados.

Se `equipamentos.txt` não existir, o programa informará que ainda não há equipamentos ao selecionar a opção de listagem. O arquivo será criado automaticamente no primeiro cadastro.

## Exemplo de registro
```text
Nome: Computador Dell | Codigo: EQ001 | Localizacao: Laboratorio 1
Nome: Projetor Epson | Codigo: EQ002 | Localizacao: Sala 3
Nome: Teclado USB | Codigo: EQ003 | Localizacao: Laboratorio 2
```
