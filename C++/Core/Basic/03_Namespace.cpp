#include <iostream>
using namespace std;
namespace name1{
 string name="Mohan";
}
namespace name2{
  string name="Mohan";
}
using namespace name1;

int main(){
  cout<<"---------------------------------";
 // cout<<"\nName space 1  not using namespace  :"<<name1::name; // not using namespace
  //cout<<"\nName space 2  not using namespace  :"<<name2::name;// not using namespace
  cout<<"\nName space 1 using namespace :"<<name;// using namespace
  cout<<"\n---------------------------------\n";
  return 0;
}

