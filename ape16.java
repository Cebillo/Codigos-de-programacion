public class Main {

    public static void completarMatrices(int[][] matriz, int numero) {
        System.out.println("==== MATRIZ " + numero + " ====");

        java.util.Scanner sc = new java.util.Scanner(System.in);

        for (int i = 0; i < matriz.length; i++) {
            for (int j = 0; j < matriz[0].length; j++) {
                System.out.print("Ingrese el valor [" + i + "][" + j + "]: ");
                matriz[i][j] = sc.nextInt();
            }
        }
    }

    public static void sumaMatriz(int[][] matrizA, int[][] matrizB) {
        for (int i = 0; i < matrizA.length; i++) {
            for (int j = 0; j < matrizA[0].length; j++) {
                System.out.printf("%4d", matrizA[i][j] + matrizB[i][j]);
            }
            System.out.println();
        }
    }

    public static void restaMatriz(int[][] matrizA, int[][] matrizB) {
        for (int i = 0; i < matrizA.length; i++) {
            for (int j = 0; j < matrizA[0].length; j++) {
                System.out.printf("%4d", matrizA[i][j] - matrizB[i][j]);
            }
            System.out.println();
        }
    }

    public static void multiplicacionMatriz(int[][] matrizA, int[][] matrizB) {
        for (int i = 0; i < matrizA.length; i++) {
            for (int j = 0; j < matrizA[0].length; j++) {
                System.out.printf("%4d", matrizA[i][j] * matrizB[i][j]);
            }
            System.out.println();
        }
    }

    public static void mostrarResultado(int[][] matrizA, int[][] matrizB) {
        System.out.println("\n---------- RESULTADO SUMA DE MATRICES ----------");
        sumaMatriz(matrizA, matrizB);

        System.out.println("\n---------- RESULTADO RESTA DE MATRICES ----------");
        restaMatriz(matrizA, matrizB);

        System.out.println("\n---------- RESULTADO MULTIPLICACION DE MATRICES ----------");
        multiplicacionMatriz(matrizA, matrizB);
    }

    public static void main(String[] args) {

        int filas = 2;
        int columnas = 3;

        int[][] matrizA = new int[filas][columnas];
        int[][] matrizB = new int[filas][columnas];

        completarMatrices(matrizA, 1);
        completarMatrices(matrizB, 2);

        mostrarResultado(matrizA, matrizB);
    }
}