#include <iostream>
using namespace std;
int main(){
  int a,b;
  float c,d;
  char e;
  string str;
  string str2;
  cout<<"---------------------------------"<<endl;
  cout<<"Integer :";
  cout<<"\nEnter Your Value a :";
  cin>>a;
  cout<<"Enter Your Value b :";
  cin>>b;
  cout<<"\nYour Value is : "<<(a+b)<<endl;
  cout<<"---------------------------------"<<endl;
  cout<<"Float :";
  cout<<"\nEnter Your Value c :";
  cin>>c;
  cout<<"Enter Your Value d :";
  cin>>d;
  cout<<"Your Value is : "<<(c+d)<<endl;
  cout<<"---------------------------------"<<endl;
  cout<<"Charactor :";
  cout<<"\nEnter Your Value e :";
  cin>>e;
  cout<<"\nYour Charactor is : "<<(e)<<endl;
  cout<<"---------------------------------"<<endl;
  cout<<"String :";
  cout<<"\nEnter Your Value e :";
  cin>>str;
  cout<<"\nYour Value is : "<<(str)<<endl;
  cout<<"---------------------------------"<<endl;
  cout<<"Multiple Word : using getline(stream,variable name)";
  cout<<"\nEnter Your Value Paragraph :";
  getline(cin,str2);
  cout<<"\nYour Value is : "<<(str2)<<endl;
  cout<<"---------------------------------\n";
  return 0;
}

