//Write a Java Program to calculate factorial value of a variable by taking input from command line.
public class FactorialCalculator {

    public static void main(String[] args) {
        
        if (args.length < 1) {
            System.out.println("Please provide a number as a command-line argument.");
            return; 
        }

        try {
            int num = Integer.parseInt(args[0]);
            if (num < 0) {
                System.out.println("Factorial is not defined for negative numbers.");
                return;
            }

            long result = calculateFactorial(num);
            System.out.println("The factorial of " + num + " is: " + result);
        } catch (NumberFormatException e) {
        
            System.out.println("Invalid input. Please provide a valid integer.");
        }
    }

    public static long calculateFactorial(int number) {
        long fact = 1;

        for (int i = 1; i <= number; i++) {
            fact *= i; 
        }
        
        return fact; 
    }
}
