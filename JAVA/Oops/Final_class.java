package Oops;

public class Final_class {
    public static void main(String[] args) {
        Final_Demo o=new Final_Demo();
        o.display();
    }
}
final class Final_Demo{
    void display(){
        System.out.println("I am display");
        System.out.println("final class can't inheritance sub class");
    }
}
// class AAA extends Final_Demo{

// }