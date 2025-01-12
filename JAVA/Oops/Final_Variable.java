package Oops;

public class Final_Variable {
    public static void main(String[] args) {
        Test test=new Test(30);
        test.display(); 
        test.Final_method();
        System.out.println("------------------------------------");
    }
}
class Test{
    final int min=1;
    final int MAX;
     Test(int max ) {
        this.MAX = max;
    }
     void  Final_method(){
     System.out.println("Final Method...");  
     System.out.println("once value assigned can't change "); 
    }
    void display(){
        System.out.println("Final Variable min :"+min);
        System.out.println("Final Variable max :"+MAX);
    }
}