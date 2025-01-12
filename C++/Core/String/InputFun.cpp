#include <iostream>
using namespace std;
int main(){
  string str;  
  cout<<"---------------------------------"<<endl;
  cout<<"Method :1 (cin)"<<endl;
  cout<<"Enter String :"<<endl;
  cin>>str;
  cout<<"Your String is :"<<str<<endl;
  cout<<"---------------------------------"<<endl;
  cout<<"Method :2 (getline)"<<endl;
  cout<<"Enter String :"<<endl;
  fflush(stdin);
  getline(cin,str);
  cout<<"Your String is :"<<str<<endl;
  cout<<"---------------------------------"<<endl;
  
  return 0;
}
