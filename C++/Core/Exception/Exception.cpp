#include <iostream>
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
  int a=10,b=0;
  try{
    if(b==0){
        // throw string("can't divide by Zero");
        throw  23;
    }
    cout<<"Value :"<<a/b<<endl;
  }
  // catch(string e){
  //   cout<<"Error:"<<e<<endl;
  // }
    catch(int e){
    cout<<"Error:"<<e<<endl;
  }
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}