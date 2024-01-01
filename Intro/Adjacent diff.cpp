#include <functional>
#include <iostream>
#include <numeric>
using namespace std;
int myfun(int x, int y) 
{ 
    return x + y; 
}
int main()
{
    int a[] = { 1, 2, 3, 4, 5, 6 };
    int b[6];
    adjacent_difference(a, a + 6, b);
    cout << "\nResult using adjacent_difference: ";
    for (int i = 0; i < 6; i++)
            cout << b[i] << ' ';
 
    adjacent_difference(a, a + 6, b, myfun);
    cout << "\nResult using accumulate with user-defined function: ";
    for (int i = 0; i < 6; i++)
            cout << b[i] << ' ';
 
    adjacent_difference(a, a + 6, b, multiplies<int>());
    cout << "\nResult using accumulate with pre-defined function: ";
    for (int i = 0; i < 6; i++)
            cout << b[i] << ' ';
    return 0;
}
