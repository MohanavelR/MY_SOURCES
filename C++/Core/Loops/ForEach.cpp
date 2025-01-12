#include <iostream>
using namespace std;
int main(){
    int a[]={10,20,30,40,50,60,70,80};
  cout<<"---------------------------------"<<endl;
  int length_of=sizeof(a)/sizeof(int);
  for(int i=0;i<length_of;i++){
    cout<<"Index "<<i<<" Value is : "<<a[i]<<endl;
  }
  cout<<"---------------------------------"<<endl;
  int i=0;
  for(int x:a){
    cout<<"Index "<<i++<<" Value is : "<<x<<endl;
  }
  cout<<"---------------------------------"<<endl;
    int s=0;
    for(auto x:a){
    cout<<"Index "<<s++<<" Value is : "<<x<<endl;
  }


  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
