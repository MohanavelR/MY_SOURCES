package Oops;

public class Copy_constractor {
    public static void main(String[] args) {
         Complex obj=new Complex();
         System.out.println("Complex 1 Value :"+obj.toString());      
         Complex obj2=new Complex(4,5);
         System.out.println("Complex 2 Value :"+obj2.toString()); 
         Complex obj3=new Complex(obj2);
         System.out.println("Complex 3 Value :"+obj3.toString());    
    }
}
class Complex{
    private int real,img;
    Complex(){
        this.img=0;
        this.real=0;

    }
    Complex(int a,int b){
       this.img=b;
       this.real=a;
    }
     public String toString(){
        return "("+real+"+"+img+"i)";
    }
    Complex(Complex o){
        this.real=o.real;
        this.img=o.img;
    }
}