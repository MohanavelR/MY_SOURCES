#include <iostream>
using namespace std;
int add(int a,int b){
   return a+b;
}
int add(int a,int b,int c){
   return a+b+c;
}
float add(float a,float b){
   return a+b;
}
int main(){
  cout<<"---------------------------------"<<endl;
  cout<<"Total :"<<add(4,5)<<endl;
  cout<<"Total :"<<add(4,5,7)<<endl;
  cout<<"Total :"<<add(4.90f,5.10f)<<endl;
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
