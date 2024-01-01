#include <iostream>
#include <numeric>
using namespace std;

int myfun(int x, int y)
{
    return x + 2 * y;
}
int main()
{
    int a[] = { 1, 2, 3, 4, 5 };
    int b[5];

    partial_sum(a, a + 5, b);
    cout << "Partial Sum - Using Default function: ";
    for (int i = 0; i < 5; i++)
        cout << b[i] << ' ';
    
    partial_sum(a, a + 5, b, myfun);
    cout << "\nPartial sum - Using user defined function: ";
    for (int i = 0; i < 5; i++)
        cout << b[i] << ' ';
    return 0;
}
