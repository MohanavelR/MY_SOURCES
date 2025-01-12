#include <iostream>
#include <array>
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
  cout<<"STL-stardard Template Library"<<endl;
  array <int,5> a={10,20,30,40,50};
  for(int x:a){
    cout<<"Value :"<<x<<endl;
  }
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}