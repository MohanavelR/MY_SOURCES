package StringsIn_java.strings_Methods;

public class EqualsIgnoreCase {
    public static void main(String[] args) {
        String str="Web Development";
        String str2="Web Development";
        System.out.println("String Function       :str.equalsIgnoreCase(str2)");
        System.out.println("My String str1        : "+str);
        System.out.println("My String str2        : "+str2);
        System.out.println("String Method Value1  : "+str.equalsIgnoreCase(str2));
        // System.out.println("String Method Value2 : "+str2.hashCode());
        System.out.println("===========================================");
        str="Web Development";
        str2="web development";
        System.out.println("String Function       :str.equalsIgnoreCase(str2)");
        System.out.println("My String str1        : "+str);
        System.out.println("My String str2        : "+str2);
        System.out.println("String Method Value1  : "+str.equalsIgnoreCase(str2));
        // System.out.println("String Method Value2 : "+str2.hashCode());
        System.out.println("===========================================");
        
    }
}
