#include <bits/stdc++.h>
using namespace std;
class Test {
    protected:
    int x;
 
    public:
    Test(int i): x(i){}
    void fun() const
    {
        cout << "fun() const called " << "\n";
    }
    void fun()
    { cout << "fun() called " << "\n"; }
};
int main()
{
    const Test t2(20);
    Test t1(10);
    t2.fun();
    t1.fun();
    return 0;
}
