<div align="center">

# Conversor de Temperatura em C

</div>

### Desenvolvido por Vinícius Oliveira Araújo

---

## Descrição

Desenvolvimento de um **conversor de temperatura interativo**, capaz de realizar conversões entre as escalas **Celsius, Fahrenheit e Kelvin**.

O projeto foi desenvolvido em linguagem C com o objetivo de aplicar conceitos fundamentais de programação, como **funções, estruturas de seleção, variáveis e entrada/saída de dados**.

---

## Objetivos de Aprendizado

- **Criação de Funções:** Organização das fórmulas de conversão em funções independentes.
- **Seleção Condicional:** Implementação de `switch...case` para controlar as opções do menu.
- **Manipulação Numérica:** Uso do tipo `float` para trabalhar com valores decimais de temperatura.
- **Entrada e Saída de Dados:** Utilização de `scanf` e `printf` para interação com o usuário.

---

## Tecnologias & Dependências

* **Linguagem C:** Linguagem utilizada para implementação do projeto.
* **`stdio.h`:** Biblioteca utilizada para entrada e saída de dados através de `scanf` e `printf`.
* **OnlineGDB:** Ambiente online utilizado para executar e testar o código.

---

## Como Executar

1. Copie o código do arquivo
2. Vá até o site ```https://www.onlinegdb.com/```
3. Faça uma conta
4. Cole o código para rodar e testar o programa (selecione a opção "linguagem C").
---

##  Conversões Implementadas

| ID | Conversão | Fórmula |
| :-: | :--- | :--- |
| **01** | Celsius → Fahrenheit | $F = (C \times \frac{9}{5}) + 32$ |
| **02** | Fahrenheit → Celsius | $K = C + 273.15$ |
| **03** | Kelvin → Fahrenheit | $C = (F - 32) \times \frac{5}{9}$ |
| **04** | Fahrenheit → Kelvin | $K = (F - 32) \times \frac{5}{9} + 273.15$ |
| **05** | Celsius → Kelvin | $C = K - 273.15$ |
| **06** | Kelvin → Celsius | $F = (K - 273.15) \times \frac{9}{5} + 32$ |

---

## Tipos de Dados

Uso de diferentes tipos de dados de acordo com sua finalidade:

* **`int`:** Armazenamento da opção selecionada no menu.
* **`double`:** Armazenamento da temperatura e dos resultados das conversões.

---

## Funcionamento do programa

O funcionamento da calculadora segue basicamente o seguinte fluxo:

```text
Início
   ↓
Exibe o menu
   ↓
Usuário escolhe uma conversão
   ↓
Programa solicita os valores necessários
   ↓
Realiza o cálculo
   ↓
Exibe o resultado
   ↓
Encerra o programa
```

---

**Projeto desenvolvido para fins acadêmicos**
