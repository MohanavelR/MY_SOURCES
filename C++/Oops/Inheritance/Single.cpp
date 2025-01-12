#include <iostream>
using namespace std;
class BaseCls{
    public:
   void Base_method(){
  cout<<"This Base class Method."<<endl;  
   }

};
class SubCls:public BaseCls{
        
};
int main(){
  cout<<"---------------------------------"<<endl;
  cout<<"I am Created SubCls Object"<<endl;
  SubCls obj;
  obj.Base_method();
  cout<<"---------------------------------"<<endl;
  return 0;
}
