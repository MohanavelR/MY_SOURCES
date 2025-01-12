#include <iostream>
using namespace std;
class PUBLIC{
    public:
     string name;
     int age;
     void Display(){
       cout<<"Name :"<<name<<endl;
       cout<<"Age  :"<<age<<endl;
 
     }
};
int main(){
  int age;
  string name;
  PUBLIC obj;
  cout<<"Enter Your Name :";
  cin>>name;
  cout<<"Enter Your Age :";
  cin>>age; 
  cout<<"---------------------------------"<<endl;
  obj.name=name;
  obj.age=age;
  cout<<"Obj in Name :"<<obj.name<<endl;
  cout<<"Obj in Age  :"<<obj.age<<endl;
  obj.Display();
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
