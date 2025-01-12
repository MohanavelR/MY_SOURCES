#include <iostream>
using namespace std;
class Math{
    private:
       int a,b,c;
    public:
      Math(){// Default constractor 
        a=0;
        b=0;
        cout<<"Default Constractor Called..."<<endl;
      }
      Math(int a,int b){// parameter constractor
         this->a=a;
         this->b=b;
         cout<<"Parameter Constractor Called..."<<endl;
      }
      Math(Math &x){// copy constractor
        a=x.a;
        b=x.b;
         cout<<"Copy Constractor Called..."<<endl;
      }

      void ADD(){
        c=a+b;
        cout<<"Total Value :"<<c<<endl;
      }   
};
int main(){
  cout<<"---------------------------------"<<endl;
  cout<<"This is Also Called Constractor OverLoading"<<endl;
  Math obj;
  obj.ADD();
  Math obj2(21,45);
  obj2.ADD();
  Math obj3(obj2);
  obj3.ADD();
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
