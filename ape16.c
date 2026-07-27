#include <stdio.h>

// Prototipos de las funciones
void completarMatrices(int filas, int columnas, int matriz[filas][columnas], int numero);
void sumaMatriz(int filas, int columnas, int matrizA[filas][columnas], int matrizB[filas][columnas]);
void restaMatriz(int filas, int columnas, int matrizA[filas][columnas], int matrizB[filas][columnas]);
void multiplicacionMatriz(int filas, int columnas, int matrizA[filas][columnas], int matrizB[filas][columnas]);
void mostrarResultado(int filas, int columnas, int matrizA[filas][columnas], int matrizB[filas][columnas]);

int main()
{
    // Declaración del número de filas y columnas
    int filas = 2;
    int columnas = 3;

    // Declaración de las matrices A y B
    int matrizA[filas][columnas];
    int matrizB[filas][columnas];

    // Llenar la matriz A
    completarMatrices(filas, columnas, matrizA, 1);

    // Llenar la matriz B
    completarMatrices(filas, columnas, matrizB, 2);

    
    mostrarResultado(filas, columnas, matrizA, matrizB);

    return 0;
}

// Función para solicitar al usuario los valores de una matriz
void completarMatrices(int filas, int columnas, int matriz[filas][columnas], int numero)
{
    printf("==== MATRIZ %d ====\n", numero);

    // Recorrer todas las posiciones de la matriz
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            // Solicitar el valor correspondiente
            printf("Ingrese el valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Función que realiza e imprime la suma de dos matrices
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

// Función que realiza e imprime la resta de dos matrices
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

// Función que realiza e imprime la multiplicación elemento por elemento
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

// Función encargada de mostrar todos los resultados
void mostrarResultado(int filas, int columnas, int matrizA[filas][columnas], int matrizB[filas][columnas])
{
    // Mostrar la suma de las matrices
    printf("\n---------- RESULTADO SUMA DE MATRICES ----------\n");
    sumaMatriz(filas, columnas, matrizA, matrizB);

    // Mostrar la resta de las matrices
    printf("\n---------- RESULTADO RESTA DE MATRICES ----------\n");
    restaMatriz(filas, columnas, matrizA, matrizB);

    // Mostrar la multiplicación de las matrices
    printf("\n---------- RESULTADO MULTIPLICACION DE MATRICES ----------\n");
    multiplicacionMatriz(filas, columnas, matrizA, matrizB);
}
```
