package StringsIn_java.strings_Methods;

public class isBlank {
    public static void main(String[] args) {
        String str="Web Development";
        System.out.println("String Function     :str.isBlank()");
        System.out.println("My String str       : "+str);
        System.out.println("String Method Value : "+str.isBlank());
        System.out.println("=======================================");
        str="";
        System.out.println("String Function     :str.isBlank()");
        System.out.println("My String str       : "+str);
        
        System.out.println("String Method Value : "+str.isBlank());
        System.out.println("=======================================");
        str="   ";
        System.out.println("String Function     :str.isBlank()");
        System.out.println("My String str       : "+str);
        System.out.println("Length :"+str.length());
        System.out.println("String Method Value : "+str.isBlank());
        System.out.println("=======================================");
    }    
}
