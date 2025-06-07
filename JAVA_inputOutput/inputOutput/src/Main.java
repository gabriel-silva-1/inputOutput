import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner numberScanner = new Scanner(System.in);
        int number = numberScanner.nextInt();
        System.out.println(number);
        numberScanner.close(); //  Libera recuros da memória sla, usar em objetos que utiliza recursos do sistema?
        
    }
}