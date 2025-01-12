#include <iostream>
using namespace std;
class Bike{
    public:
//   virtual void start(){
//     cout<<"bike Starting ...";
//   }
  virtual void start()=0;
};
class Rx_100 : public Bike{
    public:
  void start(){
    cout<<"Rx_100 Starting ...";
  }
};
int main(){
  cout<<"---------------------------------"<<endl;
  Bike *b=new Rx_100();
  b->start();
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
