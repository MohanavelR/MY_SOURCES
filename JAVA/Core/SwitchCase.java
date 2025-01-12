import java.util.Scanner;

public class SwitchCase {
    public static void main(String[] args) {
        try(java.util.Scanner in=new Scanner(System.in)){
            int a,b,ch;
            System.out.println("1.Addition");
            System.out.println("2.Subtraction");
            System.out.println("3.Multiplication");
            System.out.println("4.Division");
            System.out.print("Your Operaction :");
            ch=in.nextInt();
            System.out.print("Enter value 1 :");
            a=in.nextInt();
            System.out.print("Enter value 2 :");
            b=in.nextInt();
            switch(ch){
                case 1:
                System.out.println("Addition Value:"+(a+b));
                break;
                case 2:
                System.out.println("Subtraction Value:"+(a-b));
                break; 
                case 3:
                System.out.println("Multiplication Value:"+(a*b));
                break;
                case 4:
                System.out.println("Divition Value:"+(a+b));
                break;
                default:
                System.out.println("Invailed choice...");
                break;                                                               
            }

        }
    }
}
