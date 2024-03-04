import java.util.Scanner;

public class calcBaza {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter the total amount: ");
        int totalAmount = scanner.nextInt();
        
        System.out.print("Enter the number of guys: ");
        int guys = scanner.nextInt();
        
        System.out.print("Enter the number of girls: ");
        int girls = scanner.nextInt();
        
        double guysNumber = guys * 0.7;
        double girlsNumber = girls * 0.5;
        double allNumbersPerson = guysNumber + girlsNumber;
        double onePointAmount = totalAmount / allNumbersPerson;
        double guysAmount = onePointAmount * 0.7;
        double girlsAmount = onePointAmount * 0.5;
        
        System.out.println();
        
        // find how many guys owe
        double guysAllAmount = guysAmount * guys;
        System.out.println("All Guys Amount: " + String.format("%.2f", guysAllAmount));
        
        // find how many girls owe
        double girlsAllAmount = girlsAmount * girls;
        System.out.println("All Girls Amount: " + String.format("%.2f", girlsAllAmount));
        
        // find how much one guy owes
        double oneGuysAmount = guysAllAmount / guys;
        System.out.println("One Guys Amount: " + String.format("%.2f", oneGuysAmount));
        
        // find how much one girl owes
        double oneGirlsAmount = girlsAllAmount / girls;
        System.out.println("One Girls Amount: " + String.format("%.2f", oneGirlsAmount));
        
        System.out.println("\nPress Enter to exit the program...");
        scanner.nextLine(); // waiting for user input
        scanner.nextLine(); // waiting for the Enter key to be pressed
    }
}
