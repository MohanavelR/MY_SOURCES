

#include <iostream>
using namespace std;
int main(){
    int ch,a,b;
  cout<<"---------------------------------"<<endl;
           cout<<"1.Addition"<<endl;
           cout<<"2.Subtraction"<<endl;
           cout<<"3.Multiplication"<<endl;
           cout<<"4.Division"<<endl;
           cout<<"Your Operaction :";
           cin>>ch;
           cout<<("Enter value 1 :");
           cin>> a;
           cout<<("Enter value 2 :");
           cin>> b;
            switch(ch){
                case 1:
               cout<<"Addition Value:"<<(a+b);
                break;
                case 2:
               cout<<"Subtraction Value:"<<(a-b);
                break; 
                case 3:
               cout<<"Multiplication Value:"<<(a*b);
                break;
                case 4:
               cout<<"Divition Value:"<<(a+b);
                break;
                default:
               cout<<("Invailed Operaction...");
                break;                                                               
            }
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
        