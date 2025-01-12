#include <iostream>
using namespace std;
template <class data>
void Swap(data &a,data &b){
    data temp=a;
    a=b;
    b=temp;
}
int main(){
  cout<<"---------------------------------"<<endl;
  int a=10,b=90;
   cout<<" int Before Swapping :"<<endl;
    cout<<"a value :"<<a<<endl;
    cout<<"b value :"<<b<<endl;
    Swap(a,b);
    cout<<"int After Swapping :"<<endl;
    cout<<"a value :"<<a<<endl;
    cout<<"b value :"<<b<<endl;
  cout<<"----------------------------------------------"<<endl;
   char c='C',d='D';
     cout<<" char Before Swapping :"<<endl;
    cout<<"c value :"<<c<<endl;
    cout<<"d value :"<<d<<endl;
    Swap(c,d);
    cout<<"char After Swapping :"<<endl;
    cout<<"c value :"<<c<<endl;
    cout<<"d value :"<<d<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
