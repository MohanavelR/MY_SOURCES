#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> x){
    while(!x.empty()){
      cout<<" "<<x.top();
      x.pop();
    }
}
int main(){
  cout<<"---------------------------------"<<endl;
  stack <int> a;
  a.push(50);
  a.push(40);
  a.push(30);
   print(a);
 cout<<"\n";
  cout<<"---------------------------------"<<endl;
  return 0;
}
