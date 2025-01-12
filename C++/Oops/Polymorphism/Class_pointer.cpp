#include <iostream>
using namespace std;
class car{
    public:
  void start(){
    cout<<"Starting ...";
  }
};
class BMW :public car{
    public:
   void gear(){
    cout<<"Advance gears";
   }
};
int main(){
  cout<<"---------------------------------"<<endl;
  BMW a;
  car *ptr=NULL;
  ptr=&a;
  ptr->start();
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
