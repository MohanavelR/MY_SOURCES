#include <iostream>
using namespace std;
int main(){
  int num[10];
  int num2[5]={1,2,3};
  int num3[]={10,20,30,56};
  cout<<"---------------------------------"<<endl;
  for(int x:num){
    cout<<"Value :"<<x<<endl;
  }
  cout<<"---------------------------------"<<endl;
    for(int x:num2){
    cout<<"Value :"<<x<<endl;
  }
    cout<<"---------------------------------"<<endl;
    for(int x:num3){
    cout<<"Value :"<<x<<endl;
  }

  cout<<""<<endl;

  cout<<"---------------------------------"<<endl;
  return 0;
}
