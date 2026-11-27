<div align="center">
  
# Sistema de Operações com Matrizes em C

</div>

### Projeto desenvolvido por Vinícius Oliveira Araújo
### Disciplina: Desenvolvimento de Algoritmo e Pensamento Computacional
### Professora Karla Sartin

---

## Sobre o projeto

Este projeto consiste no desenvolvimento de um **sistema interativo em linguagem C** que permite ao usuário cadastrar duas ou mais matrizes e realizar operações matemáticas entre elas.

---

## Funcionalidades

### O sistema permite:

* Cadastrar de 2 a 10 matrizes.
* Informar a quantidade de linhas e colunas de cada matriz.
* Inserir individualmente os elementos das matrizes.
* Exibir as matrizes cadastradas.
* Realizar adição de matrizes.
* Realizar subtração de matrizes.
* Realizar multiplicação de matrizes.
* Realizar divisão matricial utilizando a inversa da matriz divisora.
* Verificar se as dimensões são compatíveis com a operação escolhida.
* Identificar matrizes singulares, que não possuem inversa.
* Realizar novas operações ou encerrar o programa.
* Organização dos arquivos

**O projeto foi dividido em arquivos separados, de acordo com a responsabilidade de cada parte do programa.**

---

## Arquivos do sistema

* `main.c` - Controla o fluxo principal e apresenta o menu.
* `matrizes.h` - Contém as bibliotecas, constantes e protótipos das funções.
* `leitura.c` - Responsável pela leitura e cadastro das matrizes.
* `exibicao.c` - Responsável pela exibição das matrizes e resultados.
* `validacao.c` - Verifica as condições necessárias para realizar as operações.
* `operacoes.c` - Executa as operações matemáticas entre as matrizes.

---

## Operações

* Adição 
* subtração
* Multiplicação
* Divisão matricial

---

## Como utilizar

1. Baixe os arquivos `.c` e `.h`.
2. Abra o projeto em um ambiente que possua compilador C, como GCC.
3. Compile os arquivos utilizando o comando:
`bash
gcc main.c leitura.c exibicao.c validacao.c operacoes.c -o matrizes -lm`
4. Execute o programa.

* No Windows:

bash
matrizes.exe


* No Linux:

bash
./matrizes


**Também é possível utilizar um ambiente online compatível com projetos C de múltiplos arquivos, como o OneCompiler e o Online GDB.**

---

## Tecnologias e conceitos utilizados

* Linguagem C.
* Matrizes e vetores.
* Funções.
* Estruturas condicionais.
* Estruturas de repetição.
* Modularização.
* Operações matemáticas matriciais.
* Método de Gauss-Jordan para cálculo da inversa.

---

**Projeto desenvolvido para fins acadêmicos**
