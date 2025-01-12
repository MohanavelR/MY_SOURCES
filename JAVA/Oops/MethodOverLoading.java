package Oops;

public class MethodOverLoading {
    public static void main(String[] args) {
        System.out.println("String Add  :"+Maths.Add("Mohan","R"));
        System.out.println("char Add    :"+Maths.Add('M' ));
        System.out.println("int Add     :"+Maths.Add(5,7));
        System.out.println("float Add   :"+Maths.Add(3.2f, 4.5f));
    }
}
class Maths{
    static String Add(String name1 ,String name2){
        return name1+name2;
    }
    static char Add(char n ){
        return (n);
    }
    static int Add(int a ,int b){
        return a+b;
    }
    static float Add(float x ,float y){
        return x+y;
    }            


}
