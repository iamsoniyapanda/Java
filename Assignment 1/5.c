//Write a Java Program to calculate factorial value of a declared variable by creating separate class and method for factorial segment.
public class FactorialCalculator {

    public static void main(String[] args) {
        int num = 5; 
        Factorial factorialObj = new Factorial();
        long result = factorialObj.calculateFactorial(num);
        System.out.println("The factorial of " + num + " is: " + result);
    }
}
