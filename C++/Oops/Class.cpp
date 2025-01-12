#include <iostream>
using namespace std;
class Circle{
   private :
     float radius;
   public:
     float Area(){
        cout<<"Enter Your Radius :";
        cin>>radius;
        return (3.14*(radius*radius));
     }  
     float Circum(){
        return (3.14*(2*radius));
     }  
};
int main(){
  cout<<"---------------------------------"<<endl;
  Circle obj;
  cout<<"Obj in Area of circle :"<<obj.Area()<<endl;
  cout<<"Obj in Area of circum :"<<obj.Circum()<<endl;
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}
