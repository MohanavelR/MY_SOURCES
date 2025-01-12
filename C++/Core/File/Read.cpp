#include <iostream>
#include<fstream>
using namespace std;
int main(){
  cout<<"---------------------------------"<<endl;
  string text;
  ifstream o("text.txt");
  while (getline(o,text))
  {
    cout<<text<<endl;
  }
  
  o.close();

  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}