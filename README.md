# Calculadora Multifuncional em Flowgorithm

**Aluno:** Leonardo João Ramos Gomes



## 🎯 Objetivo do Programa

O programa tem como objetivo realizar diferentes cálculos matemáticos, geométricos e de saúde corporal por meio de um menu interativo[cite: 1]. Ele permite ao usuário escolher entre o cálculo de Índice de Massa Corporal (IMC), cálculo de áreas geométricas e operações matemáticas/trigonométricas diversas[cite: 1].



## ⚙️ Descrição Resumida do Funcionamento

O algoritmo inicia solicitando que o usuário selecione uma opção no menu principal[cite: 1]:

- **Opção 1:** Executa o módulo do cálculo do IMC[cite: 1].
- **Opção 2:** Abre o submenu de cálculo de áreas geométricas[cite: 1].
- **Opção 3:** Abre o submenu com 20 funções matemáticas e trigonométricas adicionais[cite: 1].

De acordo com a escolha, o programa solicita as entradas necessárias (como peso, altura, lados, raio ou números para operações), processa as fórmulas correspondentes e exibe o resultado final no terminal[cite: 1].



## 📌 Funções disponiveis

### 1. Cálculo de IMC (Opção 1)
Recebe o peso (kg) e a altura (cm)[cite: 1]. O cálculo utiliza a fórmula:
$$\text{IMC} = \frac{\text{peso}}{\left(\frac{\text{altura}}{100}\right)^2}$$

Classifica o resultado nas faixas[cite: 1]:
- **Abaixo de 18.5:** Baixo peso[cite: 1]
- **18.6 a 24.9:** Peso normal[cite: 1]
- **25.0 a 29.9:** Excesso de peso[cite: 1]
- **30.0 a 34.9:** Obesidade grau 1[cite: 1]
- **35.0 a 39.9:** Obesidade grau 2[cite: 1]
- **Acima de 40.0:** Obesidade mórbida[cite: 1]

### 2. Cálculo de Área (Opção 2)
Permite calcular a área das seguintes figuras geométricas[cite: 1]:
1. **Quadrado:** $A = l^2$[cite: 1]
2. **Triângulo:** $A = \frac{b \cdot a}{2}$[cite: 1]
3. **Retângulo:** $A = a \cdot b$[cite: 1]
4. **Círculo:** $A = r^2 \cdot 3.14$[cite: 1]

---

## 🔢 Relação das 20 Funções Implementadas (Opção 3)

1. **Soma:** $a + b$[cite: 1]
2. **Subtração:** $a - b$[cite: 1]
3. **Divisão:** $a / b$[cite: 1]
4. **Potenciação:** $a^b$[cite: 1]
5. **Raiz Quadrada:** $\sqrt{a}$ (`sqrt(a)`)[cite: 1]
6. **Multiplicação:** $a \cdot b$[cite: 1]
7. **Teorema de Pitágoras:** Cálculo de cateto ou hipotenusa[cite: 1]
8. **Valor Absoluto:** $|a|$ (`Abs(a)`)[cite: 1]
9. **Arco-seno:** $\arcsin(a)$ (`Arcsin(a)`)[cite: 1]
10. **Arco-cosseno:** $\arccos(a)$ (`Arccos(a)`)[cite: 1]
11. **Arco-tangente:** $\arctan(a)$ (`Arctan(a)`)[cite: 1]
12. **Cosseno:** $\cos(a)$ (`Cos(a)`)[cite: 1]
13. **Valor Inteiro de um Número Real:** Truncamento de real para inteiro (`Int(a)`)[cite: 1]
14. **Logaritmo Natural:** $\ln(a)$ (`ln(a)`)[cite: 1]
15. **Logaritmo de Base 10:** $\log_{10}(a)$ (`Log10(a)`)[cite: 1]
16. **Logaritmo de Base 7:** $\frac{\ln(a)}{\ln(7)}$[cite: 1]
17. **Logaritmo de Base 5:** $\frac{\ln(a)}{\ln(5)}$[cite: 1]
18. **Logaritmo de Base 3:** $\frac{\ln(a)}{\ln(3)}$[cite: 1]
19. **Logaritmo de Base 2:** $\frac{\ln(a)}{\ln(2)}$[cite: 1]
20. **Seno:** $\sin(a)$ (`Sin(a)`)[cite: 1]



## 🚀 Instruções Básicas para Execução

1. Faça o download e instale o programa [Flowgorithm](http://www.flowgorithm.org/) (versão 4.2 ou superior)[cite: 1].
2. Baixe o arquivo `IMC CALCUADORA.fprg` deste repositório[cite: 1].
3. Abra o arquivo no Flowgorithm[cite: 1].
4. Clique no botão de execução **Run** (ícone verde de *play*) ou pressione a tecla `F5`[cite: 1].
5. Siga as instruções exibidas no console/terminal interativo digitando os números das opções desejadas[cite: 1].
