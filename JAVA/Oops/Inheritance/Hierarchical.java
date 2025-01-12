package Oops.Inheritance;

public class Hierarchical {
    public static void main(String[] args) {
     Rect obj1=new Rect(23,45);
     Circle obj2=new Circle(12);
     System.out.println("I am created shape extends classes Rect,and Circle Objects");
     System.out.println("obj 1 Length Value  : "+obj1.length);
     System.out.println("obj 1 Breadth Value : "+obj1.breadth);
     System.out.println("Obj 2 radius value  : "+obj2.radius);
     System.out.println("obj 1 Rectangle Area: "+obj1.Rectangle_Area());
     System.out.println("obj 2 circle Area   : "+obj2.Circle_Area());

    }
}
class Shape{
float length,breadth,radius;

}
class Rect extends Shape{
Rect(float l,float b){
  length=l;
  breadth=b;

}
float Rectangle_Area(){
    return length*breadth;
}
}
class Circle extends Shape{
     Circle(float r){
           radius=r;
     }
     float Circle_Area(){
        return (3.14f*(radius*radius));
     }
}