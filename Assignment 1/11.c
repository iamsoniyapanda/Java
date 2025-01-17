 Write a Java program for following grading system.
//Note: Percentage>=90% : Grade A
//Percentage>=80% : Grade B
//Percentage>=70% : Grade C
//Percentage>=60% : Grade D
//Percentage>=40% : Grade E
//Percentage < 40% : Grade F


import java.util.Scanner;

public class GradingSystem {

    public static void main(String[] args) {
        // Create a Scanner object to take user input
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter marks for 5 subjects
        System.out.print("Enter marks for subject 1: ");
        double subject1 = scanner.nextDouble();
        
        System.out.print("Enter marks for subject 2: ");
        double subject2 = scanner.nextDouble();
        
        System.out.print("Enter marks for subject 3: ");
        double subject3 = scanner.nextDouble();
        
        System.out.print("Enter marks for subject 4: ");
        double subject4 = scanner.nextDouble();
        
        System.out.print("Enter marks for subject 5: ");
        double subject5 = scanner.nextDouble();

        // Calculate the total and percentage
        double totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;
        double percentage = (totalMarks / 500) * 100;

        // Display the percentage
        System.out.println("Your total percentage is: " + percentage + "%");

        // Determine the grade based on percentage
        char grade = getGrade(percentage);

        // Display the grade
        System.out.println("Your grade is: " + grade);

        // Close the scanner to prevent resource leak
        scanner.close();
    }

    // Method to determine the grade based on percentage
    public static char getGrade(double percentage) {
        if (percentage >= 90) {
            return 'A';  // Grade A for percentage >= 90%
        } else if (percentage >= 80) {
            return 'B';  // Grade B for percentage >= 80%
        } else if (percentage >= 70) {
            return 'C';  // Grade C for percentage >= 70%
        } else if (percentage >= 60) {
            return 'D';  // Grade D for percentage >= 60%
        } else if (percentage >= 40) {
            return 'E';  // Grade E for percentage >= 40%
        } else {
            return 'F';  // Grade F for percentage < 40%
        }
    }
}
