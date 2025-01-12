#include <iostream>
using namespace std;
class student{
    private:
      string name;
      int age;
      char symbol;
      public :
    //   student(string name,int age){
    //      name=name;
    //      age=age;
    //   }// this constractor same name can't assingned
   student(string name,int age,int s):name(name),age(age),symbol{s}{}; // narrowing conversion
      void print(){
        cout<<"Name    :"<<name<<endl;
        cout<<"Age     :"<<age<<endl;
        cout<<"Symbol  :"<<symbol<<endl;
      }
};
class base{
    private:
      int a;
      const int b ;
      public:
        base(int x,int y):a(x), b(y){};
};
int main(){
  cout<<"---------------------------------"<<endl;
  student s("Mohan",21,500);
   s.print();
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}