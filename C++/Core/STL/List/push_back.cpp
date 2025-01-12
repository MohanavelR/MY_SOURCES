#include <iostream>
#include <list>
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
  list <int> a;

  cout<<"before list a in capacity :"<<a.size()<<endl;
  a.push_back(50);
  cout<<"After list a in capacity :"<<a.size()<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
