def completarMatrices(filas, columnas, numero):
    matriz = []

    print(f"==== MATRIZ {numero} ====")

    for i in range(filas):
        fila = []
        for j in range(columnas):
            valor = int(input(f"Ingrese el valor [{i}][{j}]: "))
            fila.append(valor)
        matriz.append(fila)

    return matriz


def sumaMatriz(filas, columnas, matrizA, matrizB):
    for i in range(filas):
        for j in range(columnas):
            print(f"{matrizA[i][j] + matrizB[i][j]:4}", end="")
        print()


def restaMatriz(filas, columnas, matrizA, matrizB):
    for i in range(filas):
        for j in range(columnas):
            print(f"{matrizA[i][j] - matrizB[i][j]:4}", end="")
        print()


def multiplicacionMatriz(filas, columnas, matrizA, matrizB):
    for i in range(filas):
        for j in range(columnas):
            print(f"{matrizA[i][j] * matrizB[i][j]:4}", end="")
        print()


def mostrarResultado(filas, columnas, matrizA, matrizB):
    print("\n---------- RESULTADO SUMA DE MATRICES ----------")
    sumaMatriz(filas, columnas, matrizA, matrizB)

    print("\n---------- RESULTADO RESTA DE MATRICES ----------")
    restaMatriz(filas, columnas, matrizA, matrizB)

    print("\n---------- RESULTADO MULTIPLICACION DE MATRICES ----------")
    multiplicacionMatriz(filas, columnas, matrizA, matrizB)


filas = 2
columnas = 3

matrizA = completarMatrices(filas, columnas, 1)
matrizB = completarMatrices(filas, columnas, 2)

mostrarResultado(filas, columnas, matrizA, matrizB)