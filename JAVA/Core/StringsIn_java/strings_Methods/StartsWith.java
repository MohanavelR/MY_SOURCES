package StringsIn_java.strings_Methods;

public class StartsWith {
 public static void main(String[] args) {
    System.out.println("startsWith(value,startindex)");
    String str="Web Development";
    System.out.println("String Function     :str.startsWith('W')");
    System.out.println("My String str       : "+str);
    System.out.println("String Method Value : "+str.startsWith("W"));
    System.out.println("==============================================");
    str="Web Development";
    System.out.println("String Function     :str.startsWith('e')");
    System.out.println("My String str       : "+str);
    System.out.println("String Method Value : "+str.startsWith("e"));
    System.out.println("==============================================");
     str="Web Development";
    System.out.println("String Function     :str.startsWith('e',5)");
    System.out.println("My String str       : "+str);
    System.out.println("String Method Value : "+str.startsWith("e",5));
    System.out.println("==============================================");
}   
}
