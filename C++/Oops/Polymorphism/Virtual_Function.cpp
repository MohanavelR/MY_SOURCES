#include <iostream>
using namespace std;
class BaseCls{
    public:
   virtual void Base_method(){
  cout<<"This Base class Method."<<endl;  
   }

};
class SubCls:public BaseCls{
    public:
   void Base_method(){
  cout<<"This Subcls class Method."<<endl;  
   }    
};
class vaccine{
    public:
  virtual void putVaccine(){
    cout<<"covid vaccine"<<endl;
  }   
};
class covaxin:public vaccine{
    public:
  void putVaccine(){
    cout<<"covid covaxin"<<endl;
  }   
};
class covishield :public vaccine{
   public:
  void putVaccine(){
    cout<<"covid covishield "<<endl;
  } 
};
int main(){
  cout<<"---------------------------------"<<endl;
  cout<<"I am Created SubCls Object"<<endl;
  SubCls s;
  BaseCls *p;
  p=&s;
  s.Base_method();
  p->Base_method(); 
  covaxin cx;
  covishield cs;
  vaccine *v=NULL;
  v=&cs;
  v->putVaccine();
  v=&cx;
  v->putVaccine(); 
  cout<<"---------------------------------"<<endl;
  return 0;
}
