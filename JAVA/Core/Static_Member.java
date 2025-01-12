public class Static_Member {
    public static void main(String[] args) {
        System.out.println("Addition  (10 ,22)       :"+Mathamatical.Add(10, 23));
        System.out.println("Subtraction (10 , 20)    :"+Mathamatical.subtract(10, 20));
        System.out.println("Multipication (10,3)     :"+Mathamatical.multible(10, 3));
        System.out.println("Division (35,7b)         :"+Mathamatical.Div(35, 7));
    }
}
class Mathamatical{
    static float Add(int a,int b){
        return a+b;
    }
    static float subtract(int a,int b){
        return Math.abs(a-b);
    }
    static float Div(int a,int b){
        return a/b;
    }
    static float multible(int a,int b){
           return a*b;
    }

}
