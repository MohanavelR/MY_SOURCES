public class Function_methods {
 public static void main(String[] args) {
      System.out.println("Method : ((Access modifier) (methodtype) (method name)((parameter list)){ method body })");
      System.out.println("Method Type : return,no return . return type in return value( datatype),and no return (Void)");
      Methods o=new Methods();
      System.out.println("======================================");
      System.out.println("No return with out arguments :");
      o.NoReturn_withoutParameter();
      System.out.println("======================================");
      System.out.println("No return with arguments :");
      o.NoReturn_withParameter(10, 20); 
      System.out.println("======================================");
      System.out.println("return with out arguments :");
      System.out.println("10+21 Value :"+o.Return_withoutParameter());
      System.out.println("Return_withoutParameter called...");
      System.out.println("======================================");
      System.out.println("return with  arguments :");
      System.out.println("a+b Value :"+o.Return_withParameter(21,56));
      System.out.println("Return_withoParameter called...");
      System.out.println("======================================");
 
 }   
}

class Methods{
  void NoReturn_withoutParameter(){
    System.out.println("NoReturn_withoutParameter called...");
  }
  void NoReturn_withParameter(int a,int b){
          System.out.println("a,b add Value :"+(a+b));
         System.out.println("NoReturn_withParameter called...");
         
  }
  int Return_withoutParameter(){
      return 10+21;
  }
  int  Return_withParameter(int a,int b){
          return a+b;
  }
  
}