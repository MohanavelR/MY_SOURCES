#include <iostream>
#define PI 3.14
#define retangle(l,b) (l*b)
#define createstring(s)#s
#define createstrings(a,b)a ## b
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
  cout<<"Pi :"<<PI<<endl;
  cout<<"Retangle :"<<retangle(5,6)<<endl;
  cout<<"String :"<<createstring(mohan)<<endl;
  int ab=100;
  cout<<"String :"<<createstrings(a,b)<<endl;
  cout<<""<<endl;
     cout<<"File Name :"<<__FILE__<<endl;
     cout<<"Time      :"<<__TIME__<<endl;
     cout<<"Time      :"<<__DATE__<<endl;
     cout<<"Line      :"<<__LINE__<<endl;
     cout<<"Time      :"<<__cplusplus<<endl;

  cout<<"---------------------------------"<<endl;
  return 0;
}