public class NestingOfMethods {
public static void main(String[] args) {
    Demo obj=new Demo(4,5);
     obj.Display();
}    
}
class Demo{
    private int m,n;
    Demo(int x,int y){
     this.m=x;
     this.n=y;
    }
    private int Max_Value(){
        return m<n?n:m;
    }
    void Display(){
        int a=Max_Value();
        System.out.println("The greatest number is :"+a);
    }
}
