#include <iostream>
using namespace std;
void NoReturnWithoutArgs(){
  int a,b;
    cout<<"Enter Number a :";
    cin>>a; 
    cout<<"Enter Number b :";
    cin>>b;
    cout<<"Value of a+b :"<<a+b<<endl;
}
void NoReturnWithArgs(int a,int b){// formal parameter
    cout<<"Value :"<<a+b<<endl;
}
int ReturnWithoutAgrs(){
    int a,b;
    cout<<"Enter Number a :";
    cin>>a;
    cout<<"Enter Number b :";
    cin>>b;
    return a+b;
}
int ReturnWithArgs(int a,int b){
    return a+b;
}
int main(){
  cout<<"---------------------------------"<<endl;
  cout<<"No return without arguments  :"<<endl;
    NoReturnWithoutArgs();
    cout<<"---------------------------------------"<<endl;
    cout<<"No return with arguments  :"<<endl;
    NoReturnWithArgs(34,56);
    cout<<"---------------------------------------"<<endl;
    cout<<"return without arguments  :"<<endl;
    cout<<"Value : "<<ReturnWithoutAgrs()<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"return with arguments  :"<<endl;
    cout<<"Value : "<<ReturnWithArgs(67,89)<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
