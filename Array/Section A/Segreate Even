// CPP code to segregate even odd
// numbers in an array
#include <bits/stdc++.h>
using namespace std;

// Function to segregate even odd numbers
vector<int> arrayEvenAndOdd(vector<int>& arr)
{

    int i = -1, j = 0;
    int pivot = arr.back();
    for (j = 0; j < arr.size() - 1; j++) {
        if (arr[j] % 2 == 0) {
            i++;

            // Swapping even and odd numbers
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr.back());
    return arr;
}

// Driver code
int main()
{
    vector<int> arr = { 7, 2, 9, 4, 6, 1, 3, 8, 5 };
    vector<int> updatedArr = arrayEvenAndOdd(arr);

    // Function Call
    cout << "Updated Array: ";
    for (int num : updatedArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
