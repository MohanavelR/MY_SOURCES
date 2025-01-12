package Oops;

public class SingleTon {
    public static void main(String[] args) {
     BBB v=BBB.Create_obj();
    // BBB v2 =new BBB();
    

    }
}
class BBB {
    static BBB obj=null;
    private BBB(){
      
   }
  static  BBB Create_obj(){
    if (obj==null){
        return new BBB();
    }
     return obj;
   }
}
