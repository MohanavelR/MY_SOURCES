package Oops.InnerClasses;

public class Anonymous_inner {
 public static void main(String[] args) {
    outerDemo obj =new outerDemo();
    obj.outer_display();

 }   
}
abstract class Outer3{
    abstract void Abstract_method();
}
    class outerDemo{
        public void outer_display(){
            Outer3 o=new Outer3() {
                public void Abstract_method(){
                    System.out.println("This Abstract in Abstract Method..");
                
                } 
            };
            o.Abstract_method();
            
        }
    }

