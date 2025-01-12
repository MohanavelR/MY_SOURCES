#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
class BaseCls{
    protected:
    int a,b;
    // void Add(){
    //     cout<<"Enter two Number :";
    //     cin>>a>>b;
    //     cout<<"Total :"<<a+b<<endl;
    // }
   void Base_method(){
  cout<<"This Base class Method."<<endl;  
   }

};
class SubCls:public BaseCls{
        protected:
         int c;
         public:
    // void Add(){
    //     cout<<"Enter two or Three Number :";
    //     cin>>a>>b>>c;
    //     cout<<"Total :"<<a+b<<endl;
    // }
        public:
           void Base_method(){
             cout<<"I am Base cls Method but override subcls."<<endl;  
           }
};
int main(){
  cout<<"---------------------------------"<<endl;
  cout<<"I am Created SubCls Object"<<endl;
  SubCls obj;
  obj.Base_method();
//   obj.Add();
  cout<<"---------------------------------"<<endl;
  return 0;
}


