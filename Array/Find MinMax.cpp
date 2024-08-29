//Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
     int n = 5;
    int arr[n];
    int sum;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int a[n];
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            sum += arr[j];
        }
        a[i] = sum;
    }
    int m=a[0];
    for(int i=0; i<n; i++)
    {
        if(m<a[i])
        {
            m=a[i];
        }
    }
    cout << a[0] << " " << a[n - 1];
    return 0;
}
