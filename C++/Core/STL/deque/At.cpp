#include <iostream>
#include <deque>
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
 
  deque <int> a={10,20,30,40,50};
  cout<<"index 3 Of deque:"<<a.at(3)<<endl;
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}