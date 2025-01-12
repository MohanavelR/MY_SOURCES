#include <iostream>
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
//   cout<<"String Method      :str.max_size()"<<endl;
  string str="Web Development";
  string str2(" In C++");
  string::reverse_iterator it;
  for(it=str.rbegin();it!=str.rend();it++){
  cout<<"Value is :"<<*it<<endl;
  }
//   cout<<"String Method Value:"<<str.max_size()<<endl;
  cout<<"---------------------------------\n";
  return 0;
}
