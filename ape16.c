#include <stdio.h>

void completarMatrices(int filas, int columnas, int matriz[filas][columnas], int numero);
void sumaMatriz(int filas, int columnas, int matrizA[filas][columnas], int matrizB[filas][columnas]);
void restaMatriz(int filas, int columnas, int matrizA[filas][columnas], int matrizB[filas][columnas]);
void multiplicacionMatriz(int filas, int columnas, int matrizA[filas][columnas], int matrizB[filas][columnas]);
void mostrarResultado(int filas, int columnas, int matrizA[filas][columnas], int matrizB[filas][columnas]);

int main()
{
    int filas = 2;
    int columnas = 3;

    int matrizA[filas][columnas];
    int matrizB[filas][columnas];

    completarMatrices(filas, columnas, matrizA, 1);
    completarMatrices(filas, columnas, matrizB, 2);

    mostrarResultado(filas, columnas, matrizA, matrizB);

    return 0;
}

void completarMatrices(int filas, int columnas, int matriz[filas][columnas], int numero)
{
    printf("==== MATRIZ %d ====\n", numero);

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("Ingrese el valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void sumaMatriz(int filas, int columnas, int matrizA[filas][columnas], int matrizB[filas][columnas])
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%4d", matrizA[i][j] + matrizB[i][j]);
        }
        printf("\n");
    }
}

void restaMatriz(int filas, int columnas, int matrizA[filas][columnas], int matrizB[filas][columnas])
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%4d", matrizA[i][j] - matrizB[i][j]);
        }
        printf("\n");
    }
}

void multiplicacionMatriz(int filas, int columnas, int matrizA[filas][columnas], int matrizB[filas][columnas])
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%4d", matrizA[i][j] * matrizB[i][j]);
        }
        printf("\n");
    }
}

void mostrarResultado(int filas, int columnas, int matrizA[filas][columnas], int matrizB[filas][columnas])
{
    printf("---------- RESULTADO SUMA DE MATRICES ----------\n");
    sumaMatriz(filas, columnas, matrizA, matrizB);

    printf("---------- RESULTADO RESTA DE MATRICES ----------\n");
    restaMatriz(filas, columnas, matrizA, matrizB);

    printf("---------- RESULTADO MULTIPLICACION DE MATRICES ----------\n");
    multiplicacionMatriz(filas, columnas, matrizA, matrizB);
}