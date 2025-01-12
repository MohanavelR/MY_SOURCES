package StringsIn_java.StringBuffer_and_Builder;

public class SetCharAt {
    public static void main(String[] args) {
        StringBuffer str=new StringBuffer("Web Development");
        System.out.println("StringBuilder Function       : str.setCharAt(3, '@')");
        System.out.println("My StringBuffer str          : "+str);
         str.setCharAt(3, '@');
         System.out.println("String builder_buffer Value  : "+str);
    }   
}
