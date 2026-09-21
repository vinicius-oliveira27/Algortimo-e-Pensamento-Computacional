<div align="center">

# Monitor de Temperatura

</div>

### Desenvolvido por Vinícius Oliveira Araújo
- Disciplina: Algoritmos e Pensamento Computacional
- Professora: Profa. Karla Sartin

---

## Descrição

Desafio de desenvolvimento que consiste em um **monitor de temperatura interativo**, capaz de fazer o usuário estabelecer um limite de temperatura e identificar a **média, maior e menor temperatura, quantidade de medições e as temperaturas que ultrapassam o limite**.

O projeto foi desenvolvido em linguagem C com o objetivo de aplicar conceito da estrutura de **laço de repetição**.

---

## Objetivos de Aprendizado

- **Estrutura de laço de repetição:** Uso do `while...` e `do...while`
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
4. Cole o código para rodar e teste o programa (selecione a opção "linguagem C").

---

## Tipos de Dados

Uso de diferentes tipos de dados de acordo com sua finalidade:

* **`int`:** Armazenamento da opção selecionada no menu.
* **`float`:** Armazenamento da temperatura e dos resultados das conversões.

---

## Funcionamento do programa

O funcionamento da calculadora segue basicamente o seguinte fluxo:

```text
Início
   ↓
Exibe o menu
   ↓
Usuário define limite
   ↓
Programa solicita as temperaturas necessárias
   ↓
Usuário insere as temperaturas até exceder o limite
   ↓
Realiza o cálculo
   ↓
Exibe o resultado
   ↓
Encerra o programa
```

---

## Testes

### Teste 1

Neste teste consta a evidência do uso esperado do programa.

### Teste 2

Neste teste consta a evidência de **limite inválido** proposto pelo usuário, havendo tratamento de erros.

### Teste 3

Neste teste consta a evidência da **entrada inválida da temperatura** pelo usuário, havendo tratamento de erros.

---

## Reflexão sobre a estrutura de laço de repetição

No programa consta o uso do `do...while` e `while...` . Usei os duas formas de laços por curiosidade e por ser ,de certa forma, mais prático.

O primeiro executa o bloco antes do `while` , assim eu achei perfeito para colocar ele em situações em que eu precisaria que o usuário digitasse e caso a entrada fosse inválida, sair o mesmo comando, sem que a repetição fosse executada.

As duas formas juntas dão uma versatilidade maior e com certeza ampliou meus conhecimentos.

---

**Projeto desenvolvido para fins acadêmicos**
