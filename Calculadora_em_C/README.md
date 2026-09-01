# Calculadora Multifuncional em C

**Aluno:** Leonardo João Ramos Gomes

---

## 🎯 Objetivo do Programa

O programa tem como objetivo oferecer uma ferramenta versátil e interativa via terminal para a realização de diversos cálculos utilitários[cite: 1, 2]. Desenvolvido em linguagem C, o algoritmo atende demandas de operações matemáticas básicas, geometria, conversões de unidades, finanças, física e métricas de saúde[cite: 1, 2].

---

## ⚙️ Descrição Resumida do Funcionamento

O algoritmo funciona em laço de repetição (`while`), exibindo continuamente um menu interativo no terminal até que a opção de encerramento (`0`) seja selecionada[cite: 1]. 

- **Menu Principal:** Apresenta 20 opções de cálculos e a opção para finalizar o programa[cite: 1].
- **Entrada de Dados:** Conforme a opção digitada, o programa utiliza `scanf` para coletar os valores de entrada necessários[cite: 1].
- **Processamento:** Executa o cálculo com base nos operadores nativos de C e funções da biblioteca `<math.h>`[cite: 1].
- **Exibição do Resultado:** Mostra o resultado formatado em tela e retorna ao menu inicial[cite: 1].

---

## 📌 Funções Disponíveis

### 1. Cálculo de IMC (Opção 1)
Solicita o peso ($kg$) e a altura ($cm$)[cite: 1]. O cálculo utiliza a fórmula:

$$\text{IMC} = \frac{\text{peso}}{\left(\frac{\text{altura}}{100}\right)^2}$$

O resultado é classificado de acordo com os critérios abaixo[cite: 1]:
- **Abaixo ou igual a 18.5:** Tu estás desnutrido[cite: 1]
- **18.6 a 24.9:** Seu peso está normal[cite: 1]
- **25.0 a 29.9:** Você está com sobrepeso[cite: 1]
- **30.0 a 34.9:** Você está com obesidade I[cite: 1]

---

### 2. Cálculo de Área de Figuras (Opção 2)
Possibilita o cálculo da área de três formas geométricas[cite: 1]:
1. **Quadrado ou Retângulo:** $A = \text{largura} \cdot \text{altura}$[cite: 1]
2. **Círculo:** $A = 3.14 \cdot r^2$[cite: 1]
3. **Triângulo:** $A = \frac{b \cdot h}{2}$[cite: 1]

---

## 🔢 Relação das 20 Funções Implementadas

1. **IMC:** Cálculo do Índice de Massa Corporal e classificação[cite: 1].
2. **Área de Figuras:** Cálculo de área de quadrado/retângulo, círculo e triângulo[cite: 1].
3. **Soma:** $n_1 + n_2$[cite: 1]
4. **Subtração:** $n_1 - n_2$[cite: 1]
5. **Multiplicação:** $n_1 \cdot n_2$[cite: 1]
6. **Divisão:** $n_1 / n_2$ (com verificação para evitar divisão por zero)[cite: 1].
7. **Média Aritmética:** $\frac{n_1 + n_2}{2}$[cite: 1]
8. **Porcentagem:** $\frac{\text{valor} \cdot \text{porcentagem}}{100}$[cite: 1]
9. **Regra de Três:** $X = \frac{B \cdot C}{A}$[cite: 1]
10. **Celsius para Fahrenheit:** $F = (C \cdot \frac{9}{5}) + 32$[cite: 1]
11. **Fahrenheit para Celsius:** $C = (F - 32) \cdot \frac{5}{9}$[cite: 1]
12. **Perímetro do Retângulo:** $P = 2 \cdot (\text{largura} + \text{altura})$[cite: 1]
13. **Volume do Cubo:** $V = \text{lado}^3$[cite: 1]
14. **Juros Simples:** $J = \text{capital} \cdot (\frac{\text{taxa}}{100}) \cdot \text{tempo}$[cite: 1]
15. **Desconto:** $V_{\text{final}} = \text{valor} - (\text{valor} \cdot \frac{\text{desconto}}{100})$[cite: 1]
16. **Velocidade Média:** $V_m = \frac{\text{distância}}{\text{tempo}}$[cite: 1]
17. **Consumo de Combustível:** $C = \frac{\text{distância}}{\text{litros}}$[cite: 1]
18. **Par ou Ímpar:** Identificação da paridade do número inteiro inserido[cite: 1].
19. **Maior Entre Dois Números:** Comparação de magnitude entre dois valores[cite: 1].
20. **Potência:** Cálculo de base elevada ao expoente ($\text{base}^{\text{expoente}}$) via `pow()`[cite: 1].
