#include <iostream>
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
  auto sum=[](int a,int b){return a+b ;};

  cout<<"Total :"<<sum(4,5)<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}