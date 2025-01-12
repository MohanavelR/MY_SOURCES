#include <iostream>
using namespace std;
class PRIVATE{
    private:
     string name;
     int age;
     public:
     void Display(){
       cout<<"Name :"<<name<<endl;
       cout<<"Age  :"<<age<<endl;
     }
     void SetData(){
     cout<<"Enter Your Name :";
      cin>>name;
      cout<<"Enter Your Age :";
     cin>>age; 
     }
};
int main(){
  int age;
  string name;
  PRIVATE obj;

  cout<<"---------------------------------"<<endl;
 obj.SetData();
//   cout<<"Obj in Name :"<<obj.name<<endl;
//   cout<<"Obj in Age  :"<<obj.age<<endl;
  obj.Display();
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
