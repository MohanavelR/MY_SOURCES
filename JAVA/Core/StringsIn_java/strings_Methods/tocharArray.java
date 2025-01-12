package StringsIn_java.strings_Methods;

import java.util.Arrays;

public class tocharArray {
    public static void main(String[] args) {
    String str="Web Development";
    System.out.println("String Function     :str.toCharArray()");
    System.out.println("My String str       : "+str);
    char[] arr=str.toCharArray();
    System.out.println("String Method Value : "+Arrays.toString(arr));
}
}
