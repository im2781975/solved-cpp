#include <bits/stdc++.h>
using namespace std;

void print2largest(int arr[], int arr_size) {
    int i, first, second;
    if (arr_size < 2) {
        cout << "Invalid Input";
        return;
    }
    sort(arr, arr + arr_size);
    // Start from the second last element as the largest element is at the last
    for (i = arr_size - 2; i >= 0; i--) {
        // If the element is not equal to the largest element
        if (arr[i] != arr[arr_size - 1]) {
            cout << "\nThe second largest element is " << arr[i];
            return;
        }
    }
    cout << "\nThere is no second largest element\n";
}

void print2ndlargest(vector<int> vec) {
    set<int>s(vec.begin(), vec.end());
    vec.clear();
    // Insert all elements back into the vector in sorted order.
    set<int>::iterator it;
    for(it=s.begin(); it!=s.end(); it++)
    {
        vec.push_back(*it);
    }
    cout << "\nThe Second Largest Element in Vector is: ";
    cout<<vec[vec.size()-1];
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vec(arr, arr + n);
    print2largest(arr, n);
    print2ndlargest(vec);
    return 0;
}
