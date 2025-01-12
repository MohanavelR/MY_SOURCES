#include <iostream>
using namespace std;
class A{
    private :
    int x;
    public :
     A(){
       x=0; 
     }  
     void print(){
        cout<<"Value x:"<<x<<endl;
     } 
     friend void setValue(A &a,int value);
};
void setValue(A &a,int value){
  a.x=value;
}
int main(){
  cout<<"---------------------------------"<<endl;
  A o;
  o.print();
  setValue(o,31);
  o.print();
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
