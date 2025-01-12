package StringsIn_java.StringBuffer_and_Builder;

public class Reverse {
    public static void main(String[] args) {
        StringBuffer str=new StringBuffer("Web Development");
        System.out.println("StringBuilder Function       : str.reverse()");
        System.out.println("My StringBuffer str          : "+str);
         str.reverse();
         System.out.println("String builder_buffer Value  : "+str);
    }
}
