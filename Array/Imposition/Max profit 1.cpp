#include <bits/stdc++.h>
using namespace std;
int f(int idx, int buy, int prices[], int cap, int n)
{
    if (cap == 0) {
        return 0;
    }
    if (idx == n) {
        return 0;
    }
    int profit = 0;
    // you can either buy or not buy
    if (buy == 0) {
      profit = max(-prices[idx]
     + f(idx + 1, 1, prices,  cap, n),f(idx + 1, 0, prices,  cap, n));
    }
    // you can either sell or not sell
    else {
         profit = max( prices[idx]
        + f(idx + 1, 0, prices, cap - 1, n),f(idx + 1, 1, prices,  cap, n));
    }
    return profit;
}
int maxtwobuysell(int prices[], int n)
{
    return f(0, 0, prices, 2, n);
}

int main()
{
 
    int arr[] = { 2, 30, 15, 10, 8, 25, 80 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << maxtwobuysell(arr, size);
    return 0;
}
