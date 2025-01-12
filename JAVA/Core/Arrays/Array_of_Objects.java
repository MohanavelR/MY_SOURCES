package Arrays;

public class Array_of_Objects {
public static void main(String[] args) {
    Student student1=new Student("Mohan",123);
    student1.Print();
    Student student2=new Student("Jegan",124);
    student2.Print();
    Student[] arr=new Student[5];
    arr[0]=new Student("Mohan",1);
    arr[1]=new Student("Jegan",2);
    arr[2]=new Student("Selva",3);
    arr[3]=new Student("Karthi",4);
    arr[4]=new Student("Bala",5);
    for (Student arr1 : arr) {
        arr1.Print();
    }
}    

}
class Student{
    int roll_no;
    String name;
    Student(String name,int roll_no){
      this.name=name;
      this.roll_no=roll_no;
    }
    void Print(){
        System.out.println("sutdent name    :"+this.name);
        System.out.println("sutdent Roll_No :"+this.roll_no);
        System.out.println("-----------------------------------------");
    }
}
