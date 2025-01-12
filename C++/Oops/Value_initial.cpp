#include <iostream>
using namespace std;
class base{
    private :
    int x;
    int y;
    public:
    base(int a){
     x=a;
    }
    base(int a ,int b):x(a),y(b){
          cout<<"Value x :"<<x<<endl;
            cout<<"Value y :"<<y<<endl;
    };
    void print(){
        cout<<"Value :"<<x<<endl;
    }
};
class Sub :public base{
   private:
   int z;
   public:
     Sub(int a,int b,int c):base(a,b),z(c){    
        cout<<"Value z :"<<z<<endl;
    
     }

};
int main(){
  cout<<"---------------------------------"<<endl;
  base o(3);
  Sub s(4,5,6);
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
