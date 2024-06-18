#include <functional>
#include <iostream>
#include <numeric>
using namespace std;
 
int fun(int x, int y) 
{ return x - y; }
 
int fun1(int x, int y) 
{ return x + y; }
int main()
{
    int var = 200;
    int a[] = { 10, 15, 20 };
    int b[] = { 1, 3, 5 };
 
    cout << "\nResult using inner_product ";
    cout << inner_product(a, a + 3, b, var);
    //a[0]*b[0] +a[1]*b[1].. +var
    cout << "\nResult using inner_product with pre-defined function: ";
    cout << inner_product(a, a + 3, b, var, minus<int>(),divides<int>());
 
    cout << "\nResult using inner_product with user-defined function: ";
    cout << inner_product(a, a + 3, b, var, fun, fun1);
    //var +=(a[i] -b[i])

    return 0;
}
