#include <iostream>
using namespace std;
int sqube(int a){
   int b=a*a*a;
   return b;
}
inline int  Cube(int a){
   int b=a*a*a;
   return b;
   
   }
int main(){
  cout<<"---------------------------------"<<endl;
  cout<<"3 Cube Value :"<<sqube(3)<<endl;
  cout<<"3 Cube Value :"<<Cube(3)<<endl;
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}