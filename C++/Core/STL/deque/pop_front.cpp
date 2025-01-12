#include <iostream>
#include <deque>
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
  deque <int> a;
a.push_front(50);
  cout<<"before deque a in capacity :"<<a.size()<<endl;
  a.pop_front();
  cout<<"After deque a in capacity :"<<a.size()<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
