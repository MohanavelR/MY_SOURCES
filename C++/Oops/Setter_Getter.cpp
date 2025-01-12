#include <iostream>
using namespace std;
class Student{
    private:
      string name;
      int age;
      public :
      Student(string n,int a){
        this->setname(n);
         age=a;
      }
      string Getname(){
          return this->name;
      }
      void setname(string name){
        this->name=name;
      }
      void Details(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age  :"<<age<<endl;
      }
};
int main(){
  cout<<"---------------------------------"<<endl;
  Student s("Mohan",21);
  s.Details();
  s.setname("Mohanvel");
  s.Details();
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
