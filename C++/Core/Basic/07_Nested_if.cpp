#include <iostream>
using namespace std;
int main(){
  string gender;
  int age;  
  cout<<"Enter Your Age :";
  cin>>age;
  cout<<"---------------------------------"<<endl;
  if(age>18){
        cout<<"Enter Your Gender :";
        cin>>gender;
     if(gender=="m" || gender=="male"){
            cout<<"You Are  Eligible For Vote ."<<endl;
            cout<<"Go to Room No.45."<<endl;
     }
        else if(gender=="f" || gender=="female"){
            cout<<"You Are  Eligible For Vote ."<<endl;
            cout<<"Go to Room No.50."<<endl;
     }
     else{
         cout<<"Invailed charactors."<<endl;
     }
  }
  else{
      cout<<"You Are Not Eligible For Vote ."<<endl;
  }
//   cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}