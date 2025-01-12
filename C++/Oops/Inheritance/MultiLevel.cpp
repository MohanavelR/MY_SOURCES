#include <iostream>
using namespace std;
class BaseCls{
    public:
   void Base_method1(){
  cout<<"This Base  class Method."<<endl;  
   }

};
class SubBaseCls :public BaseCls{
    public:
   void sub_Base_method(){
  cout<<"This  sub Base  class Method."<<endl;  
   }
};
class SubCls:public SubBaseCls{
        
};
int main(){
  cout<<"---------------------------------"<<endl;
  cout<<"I am Created SubCls Object"<<endl;
  SubCls obj;
  obj.Base_method1();
  obj.sub_Base_method();
  cout<<"---------------------------------"<<endl;
  return 0;
}
