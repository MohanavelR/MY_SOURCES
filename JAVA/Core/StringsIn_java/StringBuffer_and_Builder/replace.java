package StringsIn_java.StringBuffer_and_Builder;

public class replace {
    public static void main(String[] args) {
        StringBuffer str=new StringBuffer("Web Development");
        System.out.println("StringBuilder Function       : str.replace(2,4,\"@@@@@\")");
        System.out.println("My StringBuffer str          : "+str);
         str.replace(2,4,"@@@@@");
        System.out.println("String builder_buffer Value  : "+str);
    }   
}
