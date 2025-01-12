public class Type_Casting {
public static void main(String[] args) {
    System.out.println("Windening casting :");
    System.out.println("this lower to higher type casting");
    System.out.println("Byte->short->char->long->float->double");
    System.out.println("NarrowCasting casting :");
    System.out.println("this higher to lower type casting");
    System.out.println("Byte<-short<-char<-long<-float<-double");
    byte byte_value=12;
    int int_value=(byte_value);
    double double_value=int_value;
    System.out.println("Byte Value    :"+byte_value);
    System.out.println("Byte to Int   :"+int_value);
    System.out.println("Int to Double :"+double_value);
    System.out.println("this is widening casting...");    
    double double_value2=100.10;
    int int_value2=(int)(double_value2);    
    byte byte_value2=(byte)int_value2;    
    System.out.println("Double          :"+double_value2);
    System.out.println("Double to Int   :"+int_value2);
    System.out.println("Int to byte     :"+byte_value2);
    System.out.println("this is Narrow casting...");    
}    
}
