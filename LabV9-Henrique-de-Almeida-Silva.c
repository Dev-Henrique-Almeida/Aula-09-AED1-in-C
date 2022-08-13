// Implemente as duas versões vistas para alocação
// dinâmica de uma matriz e determine a soma dos
// elementos de duas matrizes
//* Utilize funções
//* A ordem da matriz deve ser passada pelo usuário, tal
// como seus elementos

#include <stdio.h>
#include <stdlib.h>

int **gerarMatriz(int m, int n)
{
    int **mat, i;
    mat = (int **)malloc(m * (sizeof(int *)));
    for (i = 0; i < m; i++)
    {
        mat[i] = (int *)malloc(n * (sizeof(int *)));
    }
    return mat;
}

void adicionarMatriz(int m, int n, int **matriz)
{
    int j = 0, i = 0;

    for (i = 0; i < m; i++)
    {
        printf("Informe %d valores para a %d linha: \n", n, i + 1);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void visualizarMatriz(int m, int n, int **matriz)
{
    int j = 0, i = 0;
    printf("\n - A matriz sera: \n\n");
    for (i = 0; i < m; i++)
    {

        for (j = 0; j < n; j++)
        {

            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }
}

int *gerarVetor(int m, int n)
{
    int *matriz;
    matriz = (int *)malloc(m * n * (sizeof(int)));
    return matriz;
}

void adicionarVetor(int m, int n, int *matriz)
{
    int i;
    printf("\nInforme os valores de cada linha \nseparado por espaco, exemplo: 0 0 0 0 \n\n");
    for (i = 0; i < m * n; i++)
    {
        scanf("%d", &matriz[i]);
    }
}

void visualizarVetor(int m, int n, int *matriz)
{
    int i, help = 0;
    printf("_______________________________\n");
    printf("\n          [Nova Matriz]          \n");
    printf("_______________________________\n\n");
    printf(" - Matriz em forma de vetor: \n\n");
    printf("[ ");

    for (i = 0; i < m * n; i++)
    {
        printf("%d ", matriz[i]);
    }
    printf("]\n\n");
    printf("\n - Em forma de matriz: \n\n");
    for (i = 0; i < m * n; i++)
    {
        help += 1;
        printf("%d ", matriz[i]);
        if (help == n)
        {
            help = 0;
            printf("\n");
        }
    }
    printf("\n");
}

int main()
{
    int m, n;
    int **matriz;
    int *matrizVetor;

    // Matriz
    printf("_______________________________\n");
    printf("\n         [Gerar Matriz]           \n");
    printf("_______________________________\n\n");
    printf("Informe a quantidade de linhas da matriz: \n");
    scanf("%d", &m);
    printf("Informe a quantidade de colunas da matriz: \n");
    scanf("%d", &n);
    matriz = gerarMatriz(m, n);
    adicionarMatriz(m, n, matriz);
    visualizarMatriz(m, n, matriz);
    printf("\n");
    system("pause");
    system("cls");

    // Vetor
    printf("_______________________________\n");
    printf("\n      [Gerar nova Matriz]      \n");
    printf("_______________________________\n\n");
    printf("Informe a quantidade de linhas da nova matriz: \n");
    scanf("%d", &m);
    printf("Informe a quantidade de colunas da matriz: \n");
    scanf("%d", &n);

    matrizVetor = gerarVetor(m, n);
    adicionarVetor(m, n, matrizVetor);
    system("cls");
    visualizarVetor(m, n, matrizVetor);

    return 0;
}