#include <iostream>
using namespace std;
int main(){
  int n,table;
  cout<<"---------------------------------"<<endl;
   cout<<"Enter The Table :";
   cin>>table;
    cout<<"Enter The Limit:";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<" X "<<table<<" = "<<table*i<<endl;
    }
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}