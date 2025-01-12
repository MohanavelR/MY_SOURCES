#include <iostream>
using namespace std;

class Math{
        private:
       int a,b,c;
       public :
        Math(){// Default constractor 
        a=10;
        b=20;
        cout<<"Default Constractor Called..."<<endl;
      }
      ~Math(){
          cout<<"Destractor Called..."<<endl; 
      }
        void ADD(){
        
        cout<<"Total Value :"<<a+b<<endl;
      }
};
int main(){
  cout<<"---------------------------------"<<endl;
  cout<<"Destractor is clear automatically when you was destroy objects"<<endl;
  cout<<"This Class in Last Function"<<endl;
  Math obj;
  obj.ADD();
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}