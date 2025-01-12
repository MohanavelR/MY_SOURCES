#include <iostream>
using namespace std;
void Randam(){
    int r;
    for(int i=1;i<11;i++){
        r=rand()%10;
        cout<<"Randam Number :"<<r<<endl;
    }
}
int main(){
  cout<<"---------------------------------"<<endl;
  Randam();
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}