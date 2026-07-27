# Función para completar una matriz con los valores ingresados por el usuario
def completarMatrices(filas, columnas, numero):
    matriz = []

    print(f"==== MATRIZ {numero} ====")

    # Recorrer todas las filas de la matriz
    for i in range(filas):
        fila = []

        # Recorrer todas las columnas de la matriz
        for j in range(columnas):

            # Solicitar el valor correspondiente
            valor = int(input(f"Ingrese el valor [{i}][{j}]: "))
            fila.append(valor)

        # Agregar la fila completa a la matriz
        matriz.append(fila)

    return matriz


# Función que realiza e imprime la suma de dos matrices
def sumaMatriz(filas, columnas, matrizA, matrizB):
    for i in range(filas):
        for j in range(columnas):
            print(f"{matrizA[i][j] + matrizB[i][j]:4}", end="")
        print()


# Función que realiza e imprime la resta de dos matrices
def restaMatriz(filas, columnas, matrizA, matrizB):
    for i in range(filas):
        for j in range(columnas):
            print(f"{matrizA[i][j] - matrizB[i][j]:4}", end="")
        print()


# Función que realiza e imprime la multiplicación elemento por elemento
def multiplicacionMatriz(filas, columnas, matrizA, matrizB):
    for i in range(filas):
        for j in range(columnas):
            print(f"{matrizA[i][j] * matrizB[i][j]:4}", end="")
        print()


# Función encargada de mostrar todos los resultados
def mostrarResultado(filas, columnas, matrizA, matrizB):

    # Mostrar la suma de las matrices
    print("\n---------- RESULTADO SUMA DE MATRICES ----------")
    sumaMatriz(filas, columnas, matrizA, matrizB)

    # Mostrar la resta de las matrices
    print("\n---------- RESULTADO RESTA DE MATRICES ----------")
    restaMatriz(filas, columnas, matrizA, matrizB)

    # Mostrar la multiplicación de las matrices
    print("\n---------- RESULTADO MULTIPLICACION DE MATRICES ----------")
    multiplicacionMatriz(filas, columnas, matrizA, matrizB)


# Programa principal

# Declaración del número de filas y columnas
filas = 2
columnas = 3

# Declaración de las matrices A y B
matrizA = completarMatrices(filas, columnas, 1)
matrizB = completarMatrices(filas, columnas, 2)

# Mostrar la suma, resta y multiplicación de las matrices
mostrarResultado(filas, columnas, matrizA, matrizB)
