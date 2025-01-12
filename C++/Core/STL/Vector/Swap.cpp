#include <iostream>
#include <vector>
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
 
  vector <int> a={10,20,30,40,50};
  vector <int> b={60,70,80,90};
   cout<<"Before swapping"<<endl;
 for(int i=0;i<a.size();i++){
    cout<<"a vector value :"<<a[i]<<endl;
 }
  cout<<"---------------------------------"<<endl;
  for(int i=0;i<b.size();i++){
    cout<<"b vector value :"<<b[i]<<endl;
 }
 a.swap(b);
 cout<<"========================================="<<endl;
   cout<<"After swapping"<<endl;
 for(int i=0;i<a.size();i++){
    cout<<"a vector value :"<<a[i]<<endl;
 }
  cout<<"---------------------------------"<<endl;
  for(int i=0;i<b.size();i++){
    cout<<"b vector value :"<<b[i]<<endl;
 }
  cout<<"---------------------------------"<<endl;
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}