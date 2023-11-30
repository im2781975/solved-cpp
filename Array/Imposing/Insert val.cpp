#include <iostream>
using namespace std;

// Inserts a key in arr[] of given capacity.n is current size of arr[]. This function returns n + 1 if insertion is successful, else n.
int insertSorted(int arr[], int n, int key, int capacity)
{
    // Cannot insert more elements if n is already more than or equal to capacity
    if (n >= capacity)
        return n;
    arr[n] = key;
    return (n + 1);
   /*arr[n] = key;
If the array is not full, it inserts the value of key at the position n in the array.

   return (n + 1);
   Returns the updated size of the array after the insertion. If the array was full, it returns the original size n without incrementing it.*/
}
int main()
{
    int arr[20] = {12, 16, 20, 40, 50, 70};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 6;
    int i, key = 26;

    cout << "\nBefore Insertion: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << "  ";
        
    n = insertSorted(arr, n, key, capacity);

    cout << "\nAfter Insertion: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << "  ";

    return 0;
}

