#include <iostream>
#include <vector>
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
  vector <int> a={10,20,30,40,50};
  cout<<" before pop a size:"<<a.size()<<endl;
  a.pop_back();
  cout<<" After pop a size :"<<a.size()<<endl;
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}