package Oops;



public class Constractor {
     public static void main(String[] args) {
        ShapRectangle obj=new ShapRectangle();
        System.out.println("Rectangle Length Value : "+obj.length);
        System.out.println("Rectangle Width Value  : "+obj.width);
        System.out.println("Area of Rectangle :"+ obj.area());
     }    
}
class ShapRectangle{
     int length,width;    
    int area(){
        int a=length*width;
        return a;
    }
 ShapRectangle(){
    length=3;
    width=5;
    System.out.println("Constractor Called...");
 }   
    }

