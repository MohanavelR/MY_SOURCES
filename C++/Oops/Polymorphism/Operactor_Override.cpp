#include <iostream>
using namespace std;
class Add{
    private:
    int a;
    public:
    Add(){
        a=0;
    }
    Add(int a){
        this->a=a;
    }
    void display(){
        cout<<"Value :"<<a<<endl;
    }
    Add operator+ (Add value){
        int temp=a+value.a;
        return temp;
    }
};
class Complex{
   private:
   int real,img;
   public:
   Complex(){
    real=0;
    img=0;
   }
   Complex operator +(Complex c){
    Complex temp;
     temp.real=real+c.real;
     temp.img=img+c.img;
     return temp;
   }
   Complex(int r,int i){
   real=r;
   img=i;
   }
 void Print(){
    cout<<real<<" + "<<img<<"i"<<endl;
 }
};
int main(){
  cout<<"---------------------------------"<<endl;
   int a=80,b=20;
   cout<<"Value :"<<a+b<<endl; 
   Complex c1(3,4);
   Complex c2(5,7);
   Complex c3;
   c1.Print();
   c2.Print();
   c3=c1+c2;
   c3.Print();
  cout<<""<<endl;
  Add a1(3),a2(5),a3;
  a1.display();
  a2.display();
  a3=a1+a2;
  a3.display();
  cout<<"---------------------------------"<<endl;
  return 0;
}