package Oops;

public class Abstract {
  public static void main(String[] args) {
    System.out.println("do you create absrtact class use  abstract");
    System.out.println("we can't create object in abstract class ");
    System.out.println("Abstract class can have abstract methods and non-abtract methods");
    System.out.println("abstact methods is only delclare not define .");
    System.out.println("Abstract class can have static methods we are access like normal class static methods directly.");
    System.out.println("Abstract class in extends class is must define abstract class methods ");
    System.out.println("Abstract class must have one abstract method .");
    System.out.println("You want non-absrtact method re-define use method overriding ");
    System.out.println("abstract class-1 in extends class also abstract class not must define abstract class-1 abstract methods ");
    System.out.println("---------------------------------------");
     Extends_class obj=new Extends_class();
     obj.Abstract_method_1();
     obj.Abstract_method_2();
     obj.Non_Abstract_Method();
  }    
}
abstract class AbstractCls{    
      abstract  void Abstract_method_1();
  
      abstract void Abstract_method_2();
      void Non_Abstract_Method(){
        System.out.println("This is Abstract class in non Abstract method.");
        System.out.println("---------------------------------------"); 
    }  
}
class Extends_class extends AbstractCls{
       @Override
      void Abstract_method_1(){
        System.out.println("This Abstract in Abstract Method 1 And define extend class");
        System.out.println("---------------------------------------");
      }
      @Override
      void Abstract_method_2(){
        System.out.println("This Abstract in Abstract Method 2 And define extend class");
        System.out.println("---------------------------------------");
      }
}