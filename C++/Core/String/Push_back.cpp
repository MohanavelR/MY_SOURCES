#include <iostream>
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
  cout<<"String Method      :str.str.push_back('s')"<<endl;
  string str="Web Development";
  string str2(" In C++");
  cout<<"My string str is   :"<<str<<endl;
  str.push_back('s');
  cout<<"String Method Value:"<<str<<endl;
  cout<<"---------------------------------\n";
  return 0;
}
