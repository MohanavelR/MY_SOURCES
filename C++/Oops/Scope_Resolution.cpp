#include <iostream>
using namespace std;
class Student{
    private:
    string name;
    int m1,m2,m3,total;
    float avg;
    public :
     void SetData(){
      cout<<"Enter Your Name :";
      cin>>name;
        cout<<"Enter Your Mark1 :";
      cin>>m1;
        cout<<"Enter Your Mark2 :";
      cin>>m2;
        cout<<"Enter Your Mark3 :";
      cin>>m3;
      total=m1+m2+m3;
      avg=total/3;
     }
     void Display();
};
void Student::Display(){
  cout<<"---------------------------------"<<endl;
  cout<<"Name    :"<<name<<endl;
  cout<<"Mark 1  :"<<m1<<endl;
  cout<<"Mark 2  :"<<m2<<endl;
  cout<<"Mark 3  :"<<m3<<endl;
  cout<<"Total   :"<<total<<endl;
  cout<<"Average :"<<avg<<endl;
  cout<<""<<endl;  
}

int main(){
  cout<<"---------------------------------"<<endl;
  Student obj;
  obj.SetData();
  obj.Display();
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
