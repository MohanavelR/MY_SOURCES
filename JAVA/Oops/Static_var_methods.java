package Oops;

public class Static_var_methods{
    public static void main(String[] args) {
        static_class.static_method();
        static_class o=new static_class();
        o.class_method();
    }
}
class static_class{
    static int  static_arr=10;
    int class_var=20;
    static void static_method(){
        System.out.println("Static Method :");
        System.out.println("don't need object diractly object .");
        System.out.println("static method doesn't access class variable ");
        System.out.println("But static method access class static variable ..");
        System.out.println("Static Variable : "+static_arr);
        System.out.println("--------------------------------------------");
        // System.out.println("Class variable  :"+class_var);
    }
    void class_method(){
        System.out.println("class Method :");
        System.out.println("can't access doesn't create object  ");
        System.out.println("you can access static variable and methods ");
        System.out.println("Static Variable : "+static_arr);
        System.out.println("Class variable  : "+class_var);
        System.out.println("--------------------------------------------");
   
    }


}