#include <iostream>
using namespace std;
void Details(string name,int a,string city="No City"){
  cout<<"Name :"<<name<<endl;
  cout<<"Age  :"<<a<<endl;
  cout<<"City :"<<city<<endl;
   cout<<"---------------------------------"<<endl;
}
int main(){
  cout<<"---------------------------------"<<endl;
  Details("Mohan",34,"Salem");
  Details("Karthi",23);
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}