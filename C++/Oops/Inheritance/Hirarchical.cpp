#include <iostream>
using namespace std;
class MainCls{
    public:
   void MainCls_method(){
    cout<<"This Main class Method."<<endl;
   }
};
class sub_Base_cls_1 :public MainCls{
     public:
   void sub_base_Cls_method_1(){
    cout<<"This sub base class 1 in Method."<<endl;
   }
};
class sub_Base_cls_2 :public MainCls{
     public:
   void sub_base_Cls_method_2(){
    cout<<"This sub base class 2 in Method."<<endl;
   }
};
class sub_Base_cls_3 :public MainCls{
    public :
   void sub_base_Cls_method_3(){
    cout<<"This sub base class 3 in Method."<<endl;
   }
};
int main(){
  cout<<"---------------------------------"<<endl;
  cout<<"I am Created SubCls 1 Object"<<endl;
  sub_Base_cls_1 obj;
  sub_Base_cls_2 obj2;
  sub_Base_cls_3 obj3;
  obj.MainCls_method();
  obj.sub_base_Cls_method_1();
  cout<<"---------------------------------"<<endl;
  cout<<"I am Created SubCls 2 Object"<<endl;
   obj2.MainCls_method();
   obj2.sub_base_Cls_method_2();
  cout<<"---------------------------------"<<endl;
  cout<<"I am Created SubCls 3 Object"<<endl;
  obj3.MainCls_method();
  obj3.sub_base_Cls_method_3();
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
