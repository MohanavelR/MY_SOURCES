package Oops.InnerClasses;

public class Nested_inner {
    public static void main(String[] args) {
        Outer1 obj=new Outer1();
        obj.outer_in_Innerclass_object_method();
        Outer1.Inner1 obj2=new Outer1(). new Inner1();
        obj2.inner_display();

    }
}

class Outer1{
    int outer_var=50;
     class Inner1{
        int inner_var=70;
        void inner_display(){
      System.out.println("This Inner Method ");
      System.out.println("Inner Variable : "+inner_var);
      System.out.println("Outer Varibale : "+outer_var);
        }
     }
    void outer_display(){
          
    }
    void outer_in_Innerclass_object_method(){
        Inner1 in=new Inner1();
        in.inner_display();
        System.out.println("This Inner Variable : "+in.inner_var);
    } 
}