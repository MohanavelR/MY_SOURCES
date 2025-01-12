#include <iostream>
#include <vector>
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
 vector <int> a={10,20,30,40,50};
  for(auto i=a.begin();i!=a.end();i++){
  cout<<"Value is :"<<*i<<endl;
  }
  cout<<"---------------------------------\n";
  return 0;
}
