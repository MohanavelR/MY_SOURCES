package StringsIn_java.StringBuffer_and_Builder;

public class Delete {
    public static void main(String[] args) {
        StringBuffer str=new StringBuffer("Web Development");
        System.out.println("StringBuilder Function       : str.delete(1,5)");
        System.out.println("My StringBuffer str          : "+str);
         str.delete(1,5);
         System.out.println("String builder_buffer Value  : "+str);
    }   
}
