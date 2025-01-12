package StringsIn_java.strings_Methods;


import java.util.Arrays;

public class Split {
    public static void main(String[] args) {
    String str="Web Development";
    System.out.println("String Function     :str.split(\"  \")");
    System.out.println("My String str       : "+str);
    String[] arr=str.split(" ");
    System.out.println("String Method Value : "+Arrays.toString(arr));

}
}
