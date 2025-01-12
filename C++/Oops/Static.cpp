#include <iostream>
using namespace std;
class Static_cls{
    private :
     static int static_variable;
     int class_variable;

    public:
    Static_cls(int a){
     static_variable++;
      class_variable=a;
    } 
    void print(){
      cout<<"Class Variable :"<<class_variable<<endl;

    }
   static  void GetCount(){
        cout<<"Count is :"<<static_variable<<endl;
    }
};
int Static_cls::static_variable=0;
int main(){
  cout<<"---------------------------------"<<endl;
  Static_cls s1(2);
//   Static_cls s2(4);
//   Static_cls s3(5);
  s1.print();
  Static_cls::GetCount();
//   s2.print();
//   Static_cls::GetCount();
//   s3.print();
//  Static_cls::GetCount();
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
