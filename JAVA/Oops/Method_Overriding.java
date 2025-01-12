package Oops;

public class Method_Overriding {
    public static void main(String[] args) {
        User user=new User("Mohan",21 );
        user.Display();
        System.out.println("i created object in MainProgremmer class");
        MainProgrammer pro=new MainProgrammer("Mohanavel", 23, "wipro private limited");
        pro.Display();
    }
}
class User{
  String name;
  int age ;
  User(String name,int age){
      this.name=name;
      this.age=age;
  }
  void Display(){
    System.out.println("Name :"+name);
    System.out.println("Age  :"+age);
    System.out.println("----------------------------------");
  }
}
class MainProgrammer extends User{
    String company_name;
   MainProgrammer(String name,int age,String company_name){
      super(name, age);
      this.company_name=company_name;
   }
   @Override
   void Display(){
    System.out.println("Name         :"+name);
    System.out.println("Age          :"+age);
    System.out.println("Company Name :"+company_name);
    System.out.println("----------------------------------");
  }
}