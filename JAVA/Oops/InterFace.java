package Oops;

public class InterFace {
    public static void main(String[] args) {
        System.out.println("---------------------------------------");        
        System.out.println("Inter face class is like absrtact class but ");
        System.out.println("do you create interface class use  interface not use class key word (interface classname)");
        System.out.println("we can't create object in interface class ");
        System.out.println("Interface class can have Not Allow non-abtract methods All Methods is abstract methosds only ");
        System.out.println("Extends key word :implements");
        System.out.println("Interface class can have static methods we are access like normal class static methods directly.");
        System.out.println("Abstract class in implements  class is must define All abstract methods ");
        System.out.println("interface class-1 in extends class also interface(key word : extends) or abstract(key word :implements)  class not must define interface class-1 abstract methods ");
        System.out.println("Most Purpose is Java is Multible class inheritance doesn't supported but multible interface class inheritance supported Java ");
        System.out.println("Must mention interface in  implements class interface method is public ");
        System.out.println("Inter face class in method all default public abstract methods. you mention or not ");
        System.out.println("Not use private in Abstract methods  ");
        System.out.println("Interface variable default final static ");
        System.out.println("You can Use default methods from java 8 . must modifier is default add");
        System.out.println("---------------------------------------");
        Implementcls obj=new Implementcls();
        System.out.println("This Interface Variable value : "+InterFace_cls_1.var);
        obj.Interface_method_1();
        obj.Interface_method_2();
        obj.Interface_method_3();
        obj.Interface_method_4();
        System.out.println("This Interface Variable value : "+InterFace_cls_1.var);
        System.out.println("------------------------------------------");
        InterFace_cls_2.Static_method();
        System.out.println("------------------------------------------");
        obj.Default_Method();
        System.out.println("------------------------------------------");
        obj.Access_Private();
        System.out.println("------------------------------------------");
    }
}

interface InterFace_cls_1{
    
  int var=23;
  public abstract  void Interface_method_1();
  public abstract void Interface_method_2();
  default void Default_Method(){
    System.out.println("This Default Method of Inter face");
  }
  private void Private_Method(){
    System.out.println("This Private Method of Inter face ");
  }
  default void Access_Private(){
    Private_Method();
    System.out.println("through default method Accessing ....");
  }
}
interface InterFace_cls_2{
    static void Static_method(){
     System.out.println("This Interface in Static Method ");
    }
 public abstract  void Interface_method_3();
 public abstract void Interface_method_4(); 
}
class Implementcls implements InterFace_cls_1,InterFace_cls_2{
    @Override
    public  void Interface_method_1(){
        System.out.println("This Interface class_1 method 1 define implemants class");
        System.out.println("---------------------------------------");
    }
    @Override
    public  void Interface_method_2(){
        System.out.println("This Interface class_1 method 2 define implemants class");
        System.out.println("---------------------------------------");
    }
    @Override
    public void Interface_method_3(){
        System.out.println("This Interface class_2 method 3 define implemants class");
        System.out.println("---------------------------------------");
    }
    @Override
    public  void Interface_method_4(){
        System.out.println("This Interface class_2 method 4 define implemants class");
        System.out.println("---------------------------------------");
    }
}

// abstract class Extends_class2 implements InterFace_cls_1{

// }