#include <iostream>
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
  cout<<"String Method       :str.append(str2)"<<endl;
  string str="Web Development";
  string str2(" In C++");
  cout<<"My string str is    :"<<str<<endl;
  cout<<"My string str2 is   :"<<str2<<endl;
  cout<<"String Method Value :"<<str.append(str2)<<endl;
  cout<<"---------------------------------\n";
  return 0;
}
