package Oops.Inheritance;

public class Multilevel {
    public static void main(String[] args) {
        Son2 son=new Son2();
        son.bike();
        son.House();
        son.car();

    }
}
class GrandFather{
    void car(){
        System.out.println("GrandFather is Have a BMW Car.");
       }
}
class Father2 extends GrandFather{
    void House(){
        System.out.println("Father is Have Own 2bhk House.");
     }
}
class Son2 extends  Father2{
    void bike(){
        System.out.println("Son is Have a bike.");
       }
}
