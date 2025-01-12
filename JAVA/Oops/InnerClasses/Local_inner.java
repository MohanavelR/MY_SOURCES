package Oops.InnerClasses;

public class Local_inner {
    public static void main(String[] args) {
        Outer2 obj =new Outer2();
        obj.outer_display();
    }
}
class Outer2{
    int outer_var=50;
    
    void outer_display(){
        class Inner2{
         int inner_var=70;
            void inner_display(){
          System.out.println("This Inner Method ");
          System.out.println("Inner Variable : "+inner_var);
          System.out.println("Outer Varibale : "+outer_var);
            }
         }  

         Inner2 i=new Inner2();
         i.inner_display();
    }


}