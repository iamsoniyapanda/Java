//Write a Java Program to calculate factorial value of a declared variable by creating separate method for factorial segment.
public class FactorialCalculator {

    public static void main(String[] args) {
        int num = 5;
        long result = factorial(num);

        System.out.println("The factorial of " + num + " is: " + result);
    }
    public static long factorial(int number) {
        long fact = 1; 
        for (int i = 1; i <= number; i++) {
            fact *= i; 
        }
        return fact;
    }
}
