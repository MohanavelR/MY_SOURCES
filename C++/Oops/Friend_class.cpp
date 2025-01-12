#include <iostream>
using namespace std;
class B;
class A
{
private:
    int a = 10;
    friend B;
};
class B{
public:
    A o;
    void display()
    {
        cout << "Value a :" << o.a << endl;
    }
};

int main()
{
    cout << "---------------------------------" << endl;
    B b;
    b.display();
    cout << "" << endl;
    cout << "---------------------------------" << endl;
    return 0;
}
