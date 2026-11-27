#ifndef MATRIZES_H
#define MATRIZES_H

#include <stdio.h>
#include <math.h>

#define MAX_MATRIZES 10
#define MAX 10
#define EPSILON 0.000001

// Variaveis compartilhadas
extern float matrizes[MAX_MATRIZES][MAX][MAX];
extern int linhas[MAX_MATRIZES];
extern int colunas[MAX_MATRIZES];

// LEITURA
int lerQuantidade();
void lerMatrizes(int quantidade);

// EXIBICAO
void exibirMatriz(float m[MAX][MAX], int l, int c);
void exibirTodasMatrizes(int quantidade);

// VALIDACAO
int validarDimensoes(int l1, int c1, int l2, int c2);
int validarMultiplicacao(int c1, int l2);
int validarInversa(float a[MAX][MAX], int n);

// OPERACOES
void somar(float a[MAX][MAX], float b[MAX][MAX],
           float r[MAX][MAX], int l, int c);

void subtrair(float a[MAX][MAX], float b[MAX][MAX],
              float r[MAX][MAX], int l, int c);

void multiplicar(float a[MAX][MAX], float b[MAX][MAX],
                 float r[MAX][MAX], int l, int c, int p);

void inverter(float a[MAX][MAX], float r[MAX][MAX], int n);

void realizarOperacao(int quantidade, int opcao);

#endif