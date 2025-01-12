#include <iostream>
using namespace std;
class BaseCls{
       protected:
       int value;
       public:
   void Base_method(){
  cout<<"This Base class Method."<<endl;  
   }

};
class SubCls:public BaseCls{
    public:
   void get(){
    cout<<"Enter The Value :";
    cin>>value;
   }
   void display(){
     cout<<"Value :"<<value<<endl;
   }
     
};
int main(){
  cout<<"---------------------------------"<<endl;
  cout<<"I am Created SubCls Object"<<endl;
  cout<<"Protected is allow access own class and inheritance class .not allow diractly access.";
  SubCls obj;
  obj.Base_method();
  obj.get();
  obj.display();
  cout<<"---------------------------------"<<endl;
  return 0;
}
