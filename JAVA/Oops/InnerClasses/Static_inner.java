package Oops.InnerClasses;

public class Static_inner {
    public static void main(String[] args) {
      System.out.println("---------------------------------------------");
      System.out.println("static methods and class can't access base class in variables and methods .. ");        
      System.out.println("---------------------------------------------");
      Outer4.inner obj= new Outer4.inner();
             obj.inner_display();
    }
}
class Outer4{
    int x=10;
    static class inner{
        void inner_display(){
            // System.out.println("Outer variable x :"+x);
            System.out.println("inner static class method ...");
        }
    }
}
