package StringsIn_java.strings_Methods;

public class replace {
    public static void main(String[] args) {
        String str="Web Development";
        System.out.println("String Function     :str.replace(\"Full Stack\")");
        System.out.println("My String str       : "+str);
        System.out.println("String Method Value : "+str.replace("Web","Full Stack"));
        System.out.println("===================================================");
        str="Web Development";
        System.out.println("String Function     :str.replace('e','a')");
        System.out.println("My String str       : "+str);
        System.out.println("String Method Value : "+str.replace('e','a'));
        System.out.println("===================================================");
    
    }
}
