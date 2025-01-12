import java.util.Scanner;
public class User_Input {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Enter String :");
            String str=input.next();
            System.out.print("Enter Integer : ");
            int number=input.nextInt();
            System.out.print("Enter Byte : ");
            byte byte_value=input.nextByte();
            System.out.print("Enter Short : ");
            short short_value=input.nextShort();
            System.out.print("Enter Boolean : ");
            boolean bool_value=input.nextBoolean();
            System.out.print("Enter Charactor : ");
            char char_value=input.next().charAt(0);
            System.out.print("Enter Float : ");
            float float_value=input.nextFloat();
            System.out.print("Enter Double : ");
            double double_value=input.nextDouble();
            System.out.print("Enter Long : ");
            long long_value=input.nextLong();
            System.out.println("Input            :"+input);
            System.out.println("String Value 1   :"+str);
            System.out.println("Integer Value    :"+number);
            System.out.println("Boolean Value    :"+bool_value);
            System.out.println("Charactor Value  :"+char_value);
            System.out.println("Byte Value       :"+byte_value);
            System.out.println("Short Value      :"+short_value);
            System.out.println("Float Value      :"+float_value);
            System.out.println("Double Value     :"+double_value);
            System.out.println("Long Value       :"+long_value);
        }
    }
}
