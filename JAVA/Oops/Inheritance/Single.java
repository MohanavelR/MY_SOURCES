package Oops.Inheritance;

public class Single {
  public static void main(String[] args) {
    Son1 son=new Son1();
    son.car();
    son.House();
  }    
}

class Father1{
 void House(){
    System.out.println("Father is Have Own 2bhk House.");
 }
//  protected  void Mobile(){
//     System.out.println("Father is Have Own a Mobile.");
//  }
}
class Son1 extends Father1{
   void car(){
    System.out.println("Son is Have a BMW Car.");
   }
}
