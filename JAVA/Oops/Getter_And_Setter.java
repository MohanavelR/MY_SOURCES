package Oops;

public class Getter_And_Setter {
    public static void main(String[] args) {
       RectangleShape obj=new RectangleShape();
       obj.SetLength(30);
       obj.SetWidth(10);
       System.out.println("Rectangle Length Value : "+obj.Getlength());
       System.out.println("Rectangle Width Value  : "+obj.GetWidth());
       System.out.println("Area of Rectangel      : "+ obj.area());
       obj.SetLength(40);
       obj.SetWidth(20);
       System.out.println("Rectangle Length Value : "+obj.Getlength());
       System.out.println("Rectangle Width Value  : "+obj.GetWidth());
       System.out.println("Area of Rectangel      : "+ obj.area());
       obj.SetLength(-40);
       obj.SetWidth(-20);
       System.out.println("Rectangle Length Value : "+obj.Getlength());
       System.out.println("Rectangle Width Value  : "+obj.GetWidth());
       System.out.println("Area of Rectangel      : " + obj.area());
    }
}
class RectangleShape{
    private int length,width;
    int area(){
        int a=length*width;
        return a;
    }
    int Getlength(){
        return length;
    }
    void SetLength(int l){
        if(l<=0){
            length=0;
        }
        else{
         length=l;
        }
    }
    int GetWidth(){
        return width;
    }
    void SetWidth(int w){
        if(w<=0){
            width=0;
        }
        else{
         width=w;
        }
    }
}
