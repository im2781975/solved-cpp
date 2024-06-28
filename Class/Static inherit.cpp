#include<bits/stdc++.h>
using namespace std;
class Test{
    int x, y;
    public:
    Test(int x = 0,int y = 0){
        this->x = x;
        this->y = y;
    }
    static void Func1(){
        cout << "Func1()";
    }
    static void Func2(){
        cout << "Func2()";
    }
};
int main(){
    Test t;
    t.Func1();
    t.Func2();
}
