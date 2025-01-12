package Oops;

public class Class_Object {
    public static void main(String[] args) {
     Rectangle obj=new Rectangle();
     obj.length=10;
     obj.width=20;
     System.out.println("Area of Rectangel :"+ obj.area());
     
           }
}
class Rectangle{
    int length,width;
    void setDetails(int x,int y){
         length=x;
         width=y;
    }
    int area(){
        int a=length*width;
        return a;
    }
}
