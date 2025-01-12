#include <iostream>
using namespace std;
class BaseCls{
    public:
   void Base_method1(){
  cout<<"This Base 1 class Method."<<endl;  
   }

};
class BaseCls_2{
    public:
   void Base_method2(){
  cout<<"This Base 2 class Method."<<endl;  
   }
};
class SubCls:public BaseCls ,public BaseCls_2{
        
};
int main(){
  cout<<"---------------------------------"<<endl;
  cout<<"I am Created SubCls Object"<<endl;
  SubCls obj;
  obj.Base_method1();
  obj.Base_method2();
  cout<<"---------------------------------"<<endl;
  return 0;
}
