#include <iostream>
#include <cctype>
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
  char a[20]="Rfvh1235##@@$^2 @";
  for(int i=0;i<20;i++){
    if(isspace(a[i])){
      cout<<a[i]<<endl;
    }
  }
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}