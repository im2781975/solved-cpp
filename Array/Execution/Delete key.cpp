//delete key element
#include <iostream>
using namespace std;

int findElement(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1;
}

int deleteElement(int arr[], int n, int key) {
    int index = findElement(arr, n, key);

    if (index == -1) {
        cout << "Element not found in the array." << endl;
        return n; // If the element is not found, return the current size
    }

    // Shift elements to the left to overwrite the element to be deleted
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    cout << "Element deleted successfully." << endl;
    return n - 1;
}

int main() {
    const int maxSize = 100; 
    int arr[maxSize];
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to delete: ";
    cin >> key;

    // Delete element and get the new size of the array
    n = deleteElement(arr, n, key);

    cout<<"Array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
