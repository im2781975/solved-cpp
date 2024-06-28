#include<bits/stdc++.h>
using namespace std;
class test{
    protected: int x;
    public:
    test(int i):x(i){}
    void fun()const{
        cout << "\nconst called";
    }
    void fun(){
        cout <<"\nFun called";
    }
};
int main(){
    test a(20);
    const test b= 30;
    a.fun();
    b.fun();
}
