#include <iostream>
using namespace std;
int Division(int a,int b){
        if (b==0)
            throw 1;
        return a/b; 
    
    }
int main(){

  cout<<"---------------------------------"<<endl;
  try
  {
    int c=Division(10,0);
    cout<<"Value :"<<c<<endl;
  }
  catch(int e)
  {
    cout<<"Error No :"<<e<<endl;
  }
    catch(float e)
  {
    cout<<"Error No :"<<e<<endl;
  }
      catch(string e)
  {
    cout<<"Error No :"<<e<<endl;
  }    catch(char e)
  {
    cout<<"Error No :"<<e<<endl;
  }
catch(...)
  {
    cout<<"Error No :"<<endl;
  }
  
  cout<<""<<endl;
  cout<<"---------------------------------"<<endl;
  return 0;
}