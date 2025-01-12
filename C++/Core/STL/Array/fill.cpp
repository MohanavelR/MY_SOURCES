#include <iostream>
#include <array>
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
 
  array <int,5> a={10,20,30,40,50};
  array <int,5> b;
   cout<<"Before fill"<<endl;
  for(int i=0;i<b.size();i++){
    cout<<"b array value :"<<b[i]<<endl;
 }
 b.fill(1);
 cout<<"========================================="<<endl;
cout<<"After fill"<<endl;
  for(int i=0;i<b.size();i++){
    cout<<"b array value :"<<b[i]<<endl;
 }
  cout<<"---------------------------------"<<endl;
  return 0;
}