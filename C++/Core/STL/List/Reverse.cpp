#include <iostream>
#include <list>
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
  list <int> a={47,8,9,5};
  cout<<"Before :"<<endl;
 for(int x:a){
    cout<<"a array value :"<<x<<endl;
 }
 a.reverse();
 cout<<"Before :"<<endl;
  cout<<"---------------------------------"<<endl;
  for(int x:a){
    cout<<"a array value :"<<x<<endl;
 }
  cout<<"---------------------------------"<<endl;
  return 0;
}
