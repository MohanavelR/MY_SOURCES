package StringsIn_java.StringBuffer_and_Builder;

public class Append {
    public static void main(String[] args) {
    StringBuffer str=new StringBuffer("Web Development");
    System.out.println("StringBuilder Function       : str.append(\" in java\")");
    System.out.println("My StringBuffer str          : "+str);
     str.append(" in java");
     System.out.println("String builder_buffer Value  : "+str);
}
}
