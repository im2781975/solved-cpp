#include<bits/stdc++.h>
using namespace std;
class test{
    int x, y;
    public:
    test(int x = 0, int y = 0){
        this->x = x;
        this->y = y;
    }
    test &setx(int a){
        x = a;
        return *this;
    }
    test &sety(int b){
        y = b;
        return *this;
    }
    void print(){
        cout << "\nx: " << x << " y: " << y;
    }
};
int main(){
    test t(4, 6);
    t.print();
    t.setx(10).sety(20);
    t.print();
    
    test a;
    int x = 20;
    a.setx(20);
    a.print();
}

