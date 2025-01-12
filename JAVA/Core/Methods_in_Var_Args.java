public class Methods_in_Var_Args {
    static int Sum(int... nums){
         int sum=0;
           for(int num :nums ){
            sum+=num;
           }
     return sum;   
    }
 public static void main(String[] args) {
    System.out.println("Sum Value in numbers : "+Sum(23,45,67,89,90));
    System.out.println("Methods parameters (datatype... datatype_name)");
 }   
}
