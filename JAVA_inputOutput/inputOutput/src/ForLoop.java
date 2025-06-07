// Dado um numero N, leia N inteiros e imprima a soma deles.
// 1 + 2 + 3 + 4 = 10
import java.util.Scanner;

public class ForLoop {
    public static void main(String[] args) {
        int soma = 0;
        Scanner numberScanner = new Scanner(System.in);
        int number = numberScanner.nextInt();
        numberScanner.close();
        for (int i = 0; i < number + 1; i++){
            soma = soma + i;
        }
        System.out.println(soma);
    }
}
