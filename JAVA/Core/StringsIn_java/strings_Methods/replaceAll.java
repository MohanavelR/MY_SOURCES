package StringsIn_java.strings_Methods;

public class replaceAll {
    public static void main(String[] args) {
    String str="Web Development";
    System.out.println("String Function     :str.replaceAll(\"Full Stack\")");
    System.out.println("My String str       : "+str);
    System.out.println("String Method Value : "+str.replaceAll("Web","Full Stack"));
    System.out.println("===================================================");
    str="Web Development";
    System.out.println("String Function     :str.replaceAll(\"e\",\"a\")");
    System.out.println("My String str       : "+str);
    System.out.println("String Method Value : "+str.replaceAll("e","a"));
    System.out.println("===================================================");

}
}
