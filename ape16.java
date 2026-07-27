public class Main {

    // Función para completar una matriz con los valores ingresados por el usuario
    public static void completarMatrices(int[][] matriz, int numero) {
        System.out.println("==== MATRIZ " + numero + " ====");

        java.util.Scanner sc = new java.util.Scanner(System.in);

        // Recorrer todas las posiciones de la matriz
        for (int i = 0; i < matriz.length; i++) {
            for (int j = 0; j < matriz[0].length; j++) {

                // Solicitar el valor correspondiente
                System.out.print("Ingrese el valor [" + i + "][" + j + "]: ");
                matriz[i][j] = sc.nextInt();
            }
        }
    }

    // Función que realiza e imprime la suma de dos matrices
    public static void sumaMatriz(int[][] matrizA, int[][] matrizB) {
        for (int i = 0; i < matrizA.length; i++) {
            for (int j = 0; j < matrizA[0].length; j++) {
                System.out.printf("%4d", matrizA[i][j] + matrizB[i][j]);
            }
            System.out.println();
        }
    }

    // Función que realiza e imprime la resta de dos matrices
    public static void restaMatriz(int[][] matrizA, int[][] matrizB) {
        for (int i = 0; i < matrizA.length; i++) {
            for (int j = 0; j < matrizA[0].length; j++) {
                System.out.printf("%4d", matrizA[i][j] - matrizB[i][j]);
            }
            System.out.println();
        }
    }

    // Función que realiza e imprime la multiplicación elemento por elemento
    public static void multiplicacionMatriz(int[][] matrizA, int[][] matrizB) {
        for (int i = 0; i < matrizA.length; i++) {
            for (int j = 0; j < matrizA[0].length; j++) {
                System.out.printf("%4d", matrizA[i][j] * matrizB[i][j]);
            }
            System.out.println();
        }
    }

    // Función encargada de mostrar todos los resultados
    public static void mostrarResultado(int[][] matrizA, int[][] matrizB) {

        // Mostrar la suma de las matrices
        System.out.println("\n---------- RESULTADO SUMA DE MATRICES ----------");
        sumaMatriz(matrizA, matrizB);

        // Mostrar la resta de las matrices
        System.out.println("\n---------- RESULTADO RESTA DE MATRICES ----------");
        restaMatriz(matrizA, matrizB);

        // Mostrar la multiplicación de las matrices
        System.out.println("\n---------- RESULTADO MULTIPLICACION DE MATRICES ----------");
        multiplicacionMatriz(matrizA, matrizB);
    }

    public static void main(String[] args) {

        // Declaración del número de filas y columnas
        int filas = 2;
        int columnas = 3;

        // Declaración de las matrices A y B
        int[][] matrizA = new int[filas][columnas];
        int[][] matrizB = new int[filas][columnas];

        // Llenar la matriz A
        completarMatrices(matrizA, 1);

        // Llenar la matriz B
        completarMatrices(matrizB, 2);

        // Mostrar la suma, resta y multiplicación de las matrices
        mostrarResultado(matrizA, matrizB);
    }
}
