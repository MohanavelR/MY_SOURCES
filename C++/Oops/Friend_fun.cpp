#include <iostream>
using namespace std;
class A{
private :
  int a,b;
  public :
  friend void setData();

};
void setData(){
  A o;  
  o.a=10;
  o.b=90;
  cout<<"Value a:"<<o.a<<endl;
  cout<<"Value b:"<<o.b<<endl;
  }

int main(){
  cout<<"---------------------------------"<<endl;
  A a;
  setData();
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
