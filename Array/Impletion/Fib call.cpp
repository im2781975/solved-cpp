#include <bits/stdc++.h>
using namespace std;

int called = 0;
int save[100];

int fib(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (save[n] != 0)
    //If save[n] is not 0, it means that the Fibonacci number for n has already been calculated and stored in the save array, so it returns the value stored in save[n].
        return save[n];

    int x = fib(n - 1);
    called++;
    int y = fib(n - 2);
    called++;
    save[n] = x + y;
    return x + y;
}

int main() {
    int n;
    cin >> n;
    cout << fib(n) << "\n";
    cout << called << "\n";
    cout << save;
}
