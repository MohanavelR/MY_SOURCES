package Oops;

public class Static_blocks {
    static{
        System.out.println("Static block -1");
    }

    public static void main(String[] args) {
       System.out.println("Main block"); 
       Static o=new Static();
    }
    static{
        System.out.println("Static block -2");
    }
}
class Static{
 static {
    System.out.println("Static block -3");
 }  
 static {
    System.out.println("Static block -4");
 } 
}