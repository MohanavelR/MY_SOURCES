package Oops;

public class Final_Methods {
public static void main(String[] args) {
    sub o=new sub();
    o.Final_Method();
}    
}
class Super{
    void Final_Method(){
        System.out.println("Final Method...");  
        System.out.println("once create method can't override ");    
    }
}
class sub extends Super{

}
