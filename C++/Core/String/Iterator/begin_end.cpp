#include <iostream>
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
//   cout<<"String Method      :str.max_size()"<<endl;
  string str="Web Development";
  string str2(" In C++");
  string::iterator it;
  for(it=str.begin();it!=str.end();it++){
  cout<<"Value is :"<<*it<<endl;
  }
//   cout<<"String Method Value:"<<str.max_size()<<endl;
  cout<<"---------------------------------\n";
  return 0;
}
