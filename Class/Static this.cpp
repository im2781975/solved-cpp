#include<iostream>
using namespace std;
class Test
{
    private:
    int x;
    int y;
    public:
    Test(int x = 0, int y = 0) { this->x = x; this->y = y;
    }
    void setX(int a) { 
        x = a; 
    }
    void setY(int b) { 
        y = b;
    }
    void print() { 
      cout << "x = " << x << " y = " << y ;
    }
};
int main()
{
  Test obj;
  obj.print();
  return 0;
}

