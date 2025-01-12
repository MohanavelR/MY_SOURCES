#include <iostream>
#include <array>
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
 
  array <int,5> a={10,20,30,40,50};
  array <int,5> b={60,70,80,90};
   cout<<"Before swapping"<<endl;
 for(int i=0;i<a.size();i++){
    cout<<"a array value :"<<a[i]<<endl;
 }
  cout<<"---------------------------------"<<endl;
  for(int i=0;i<a.size();i++){
    cout<<"b array value :"<<b[i]<<endl;
 }
 a.swap(b);
 cout<<"========================================="<<endl;
   cout<<"After swapping"<<endl;
 for(int i=0;i<a.size();i++){
    cout<<"a array value :"<<a[i]<<endl;
 }
  cout<<"---------------------------------"<<endl;
  for(int i=0;i<a.size();i++){
    cout<<"b array value :"<<b[i]<<endl;
 }
  cout<<"---------------------------------"<<endl;
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}