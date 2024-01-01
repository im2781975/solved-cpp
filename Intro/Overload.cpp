#include <iostream>
using namespace std;
 
void print(int i)
{
    cout << "\nint is: " << i ;
}
void print(double  f) 
{
    cout << "\nfloat is: " << f ;
}
void print(char const *c) 
{
    cout << "\nchar* is: " << c ;
}
void add(int a, float b)
{
    cout<<"\nsum(int+float): "<<(a+b);
}
int main() {
  print(10);
  print(10.10);
  print("ten");
  add(10,10.10);
  return 0;
}
