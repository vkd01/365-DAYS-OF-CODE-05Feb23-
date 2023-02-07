
import java.util. Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int total_marks = 100;


        int marks = 0;
        System.out.println("Enter total number of students");
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            System.out.print("Enter marks of student : ");
            System.out.println(i);
            int x = sc.nextInt();
            marks += x;
        }
        total_marks *= n;
        System.out.println((marks * 100) / total_marks);

    }
}








