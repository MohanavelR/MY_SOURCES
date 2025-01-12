#include <iostream>
using namespace std;
class Bank{
    public :
   virtual void depit_credit()=0;
};
class KVB:public Bank{
void depit_credit(){
    cout<<"Credit And debit from KVB"<<endl;
}
};
class Indian:public Bank{
void depit_credit(){
    cout<<"Credit And debit from Indian"<<endl;
}
};
int main(){
  cout<<"---------------------------------"<<endl;
  Bank *b=new KVB();
  b->depit_credit();
    Bank *i=new Indian();
  i->depit_credit();
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}