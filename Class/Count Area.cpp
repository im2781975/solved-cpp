#include<bits/stdc++.h>
using namespace std;
class construct{
    public: float area;
    construct(){
        area = 0;
    }
    construct(int a, int b){
        area =a*b;
    }
    void disp(){
        cout << "\nArea is: " << area;
    }
};
int main(){
    construct c, c2(10, 20);
    c.disp();
    c2.disp();
}
