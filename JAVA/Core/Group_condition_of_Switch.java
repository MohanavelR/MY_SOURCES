import java.util.Scanner;
public class Group_condition_of_Switch {
    public static void main(String[] args) {
     char c;
     @SuppressWarnings("resource")
    Scanner in =new Scanner(System.in);
       System.out.print("Enter Your Charactor :");
         c=in.next().charAt(0);
         switch(c){
            case 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' -> System.err.println("Your Charactor is Vowels..");
            default -> System.out.println("Your Charactor is Consonant..");
         }
    }
}
/*
switch(c){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            System.err.println("Your Charactor is Vowels..");
            break;
            default:
            System.out.println("Your Charactor is Consonant..");
            break;
         }
    

 */