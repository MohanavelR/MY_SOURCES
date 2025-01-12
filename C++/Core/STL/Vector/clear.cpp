#include <iostream>
#include <vector>
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
  vector <int> a={10,20,30,40,50};
  cout<<" before clear a size:"<<a.size()<<endl;
  a.clear();
  cout<<" After clear a size :"<<a.size()<<endl;
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}