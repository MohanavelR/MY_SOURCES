#include <iostream>
using namespace std;
class A{
   public:
   A(){
    cout<<"Contractor A"<<endl;
   }
};
class B : virtual public A{
     public:
    B(){

    cout<<"Contractor B"<<endl;
   }
};
class C :virtual public A{
     public:
   C(){
    cout<<"Contractor C"<<endl;
   }
};
class D:public B,public C{
     public:
   D(){
    cout<<"Contractor D"<<endl;
   }
};
int main(){
  cout<<"---------------------------------"<<endl;
  D obj;
  
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
