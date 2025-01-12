#include <iostream>
using namespace std;
class Box{
    
    private:
    int a;
    public:
  
     Box(){
        a=0;
     }
     Box(int x){
       a=x;
     }
  void operator ++(){
      ++a;
  };
    void operator ++(int){
      a++;
  };
    void operator --(){
      --a;
  };
    void operator --(int){
      a--;
  };
  void print(){
    cout<<"Value :"<<a<<endl;
  }
  

};
int main(){
  cout<<"---------------------------------"<<endl;
  Box b1;
  b1.print();
  ++b1;
  b1.print();
    ++b1;
  b1.print();
    ++b1;
    --b1;
  b1.print();
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}