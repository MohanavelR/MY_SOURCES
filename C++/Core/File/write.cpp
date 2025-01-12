#include <iostream>
#include<fstream>
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
  ofstream o("text.txt",ios::trunc);
  o<<"Hi hello"<<endl;
  o<<"i am Mohan";
  o.close();

  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}