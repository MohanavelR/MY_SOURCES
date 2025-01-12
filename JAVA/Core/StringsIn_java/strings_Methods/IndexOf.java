package StringsIn_java.strings_Methods;

public class IndexOf {
    public static void main(String[] args) {
    System.out.println("index of(value,startindex,endindex)");    
    String str="Web Development";
    System.out.println("String Function     :str.indexOf('e')");
    System.out.println("My String str       : "+str);
    System.out.println("String Method Value : "+str.indexOf('e'));
    System.out.println("===================================================");
    str="Web Development";
    System.out.println("String Function     :str.indexOf('z')");
    System.out.println("My String str       : "+str);
    System.out.println("String Method Value : "+str.indexOf('z'));
    System.out.println("===================================================");
     str="Web Development";
    System.out.println("String Function     :str.indexOf('e',3)");
    System.out.println("My String str       : "+str);
    System.out.println("String Method Value : "+str.indexOf('e',3));
    System.out.println("===================================================");
    str="Web Development";
    System.out.println("String Function     :str.indexOf('e',6,13)");
    System.out.println("My String str       : "+str);
    System.out.println("String Method Value : "+str.indexOf('e',6,13));
    System.out.println("===================================================");
    str="Web Development";
    System.out.println("String Function     :str.indexOf('Web')");
    System.out.println("My String str       : "+str);
    System.out.println("String Method Value : "+str.indexOf("Web"));
    System.out.println("===================================================");
    str="Web Development5";
    System.out.println("String Function     :str.indexOf('5')");
    System.out.println("My String str       : "+str);
    System.out.println("String Method Value : "+str.indexOf('5'));
    System.out.println("===================================================");
       

}
}
