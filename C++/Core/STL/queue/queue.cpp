#include <iostream>
#include <queue>
using namespace std;
void print(queue<int> x){
    while(!x.empty()){
      cout<<" "<<x.front();
      x.pop();
    }
}
int main(){
  cout<<"---------------------------------"<<endl;
  queue <int> a;
  a.push(50);
  a.push(40);
  a.push(30);
   print(a);
 cout<<"\n";
  cout<<"---------------------------------"<<endl;
  return 0;
}
