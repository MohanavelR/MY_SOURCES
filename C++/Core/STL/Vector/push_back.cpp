#include <iostream>
#include <vector>
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
  vector <int> a;
  a.push_back(50);
  cout<<"vector a in capacity :"<<a.capacity()<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
