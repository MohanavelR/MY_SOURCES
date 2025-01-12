#include <iostream>
using namespace std;
class BaseCls{
    public:
   void Base_method1(){
  cout<<"This Base 1 class Method."<<endl;  
   }

};
class Sub_BaseCls_1:public BaseCls{
    public:
   void sub_Base_method1(){
  cout<<"This sub Base 1 class Method."<<endl;  
   }
};
class Sub_BaseCls_2{
    public:
   void sub_Base_method2(){
  cout<<"This sub Base 2 class Method."<<endl;  
   }
};
class SubCls:public Sub_BaseCls_1 ,public Sub_BaseCls_2{        
};
int main(){
  cout<<"---------------------------------"<<endl;
  cout<<"I am Created SubCls Object"<<endl;
  SubCls obj;
  obj.Base_method1();
  obj.sub_Base_method1();
  obj.sub_Base_method2();
  cout<<"---------------------------------"<<endl;
  return 0;
}
