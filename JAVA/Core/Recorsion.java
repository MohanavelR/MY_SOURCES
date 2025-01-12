

public class Recorsion {
 public static void main(String[] args) {
      System.out.println("5 Factorial Value :"+Factorial(5));
      System.out.println("7 Factorial Value :"+Factorial(7));
 }  
 static int Factorial(int n){
    if (n==1 || n==0){
         return 1;
         
    }
    else{
        return n*=Factorial(n-1);
    }
 } 
}
