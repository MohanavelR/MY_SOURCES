package Oops;

public class Constractor_Overloading {
    public static void main(String[] args) {
        Box obj=new Box();
        System.out.println("I am created parameter constractor and default Constractor and one parameter constractor ");
        System.out.println(" i have set Default constractor value (10,21)");
        System.out.println("Box obj=new Box()");
        System.out.println("Box1 Length  : "+obj.length);
        System.out.println("Box1 breadth : "+obj.breadth);
        System.out.println("Box1 Area    : "+obj.Area());
        Box obj2=new Box(34,45);
        System.out.println("Box obj2=new Box(34,45)");
        System.out.println("Box2 Length  : "+obj2.length);
        System.out.println("Box2 breadth : "+obj2.breadth);
        System.out.println("Box2 Area    : "+obj2.Area());
        Box obj3=new Box(32);
        System.out.println("Box obj2=new Box(32)");
        System.out.println("Box3 Length  : "+obj3.length);
        System.out.println("Box3 breadth : "+obj3.breadth);
        System.out.println("Box3 Area    : "+obj3.Area());

    }
}
class Box{
    float length;
    float breadth;
    float Area(){
        return length* breadth;
    }
 Box(){
    length=10;
    breadth=21;
    System.out.println("Constractor 1 called..");
 }
 Box(int l,int b){
     length=l;
     breadth=b;
     System.out.println("Constractor 2 called..");
 }
 Box(int x){
    length=breadth=x;
    System.out.println("Constractor 3 called..");
}
}