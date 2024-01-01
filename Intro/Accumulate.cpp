#include <iostream>
#include <numeric>
using namespace std;

int myfun(int x, int y)
{
    return x * y;
}
 
int main()
{
    // Initialize sum = 1
    int sum = 1;
    int a[] = { 5, 10, 15 };

    cout << "\nResult using accumulate: ";
    cout << accumulate(a, a + 3, sum);
 
    cout << "\nResult using accumulate with user-defined function: ";
    cout << accumulate(a, a + 3, sum, myfun);
 
    cout << "\nResult using accumulate with pre-defined function: ";
    cout << accumulate(a, a + 3, sum, minus<int>());
 
    return 0;
}
