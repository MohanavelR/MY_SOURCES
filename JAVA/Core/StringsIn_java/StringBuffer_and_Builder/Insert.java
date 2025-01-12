package StringsIn_java.StringBuffer_and_Builder;

public class Insert {
    public static void main(String[] args) {
        StringBuffer str=new StringBuffer("Web Development");
        System.out.println("StringBuilder Function       : str.insert(6,'y')");
        System.out.println("My StringBuffer str          : "+str);
        str.insert(6,'y');
        System.out.println("String builder_buffer Value  : "+str);
    }
}
