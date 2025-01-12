package StringsIn_java.StringBuffer_and_Builder;

public class Substring {
    public static void main(String[] args) {
        StringBuffer str=new StringBuffer("Web Development");
        System.out.println("String Function     :str.subString(5)");
        System.out.println("My String str       : "+str);
        System.out.println("String Method Value : "+str.substring(5));
        System.out.println("==========================================");
       
        System.out.println("String Function     :str.subString(5,10)");
        System.out.println("My String str       : "+str);
        System.out.println("String Method Value : "+str.substring(5,10));
        System.out.println("==========================================");
        
        System.out.println("String Function     :str.subString(5)");
        System.out.println("My String str       : "+str);
        System.out.println("String Method Value : "+str.substring(6));
        System.out.println("==========================================");
    }
}
