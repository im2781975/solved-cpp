#include<bits/stdc++.h>
using namespace std;
class test{
    int x, y;
    public:
    test(int x = 0, int y = 0){}
    void setx(int a){
        x = a;
    }
    void sety(int b){
        y = b;
    }
    void print(){
        cout << "x: " << x << " y: " << y << "\n";
    }
};
int main(){
    test t;
    t.setx(6);
    t.sety(9);
    t.print();
}
