#include <iostream>
#include <list>
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
  list <int> a;
a.push_front(50);
  cout<<"before list a in capacity :"<<a.size()<<endl;
  a.pop_front();
  cout<<"After list a in capacity :"<<a.size()<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
