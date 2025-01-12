#include <iostream>
using namespace std;

class MainCls{
    public:
   void MainCls_method(){
    cout<<"This Main class Method."<<endl;
   }
};
class sub_Base_cls_1 :virtual public MainCls{
     public:
   void sub_base_Cls_method_1(){
    cout<<"This sub base class 1 in Method."<<endl;
   }
};
class sub_Base_cls_2 :virtual public MainCls{
     public:
   void sub_base_Cls_method_2(){
    cout<<"This sub base class 2 in Method."<<endl;
   }
};
class sub_cls : public sub_Base_cls_1 ,public sub_Base_cls_2{
   

};
int main(){
  cout<<"---------------------------------"<<endl;
  cout<<"I am Created SubCls  Object"<<endl;
  sub_cls obj;
  obj.MainCls_method();
  obj.sub_base_Cls_method_1();
  obj.sub_base_Cls_method_2();
  cout<<"---------------------------------"<<endl;
  return 0;
}
