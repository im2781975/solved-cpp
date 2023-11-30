#include <iostream>
#include <vector>
using namespace std;
int sentinelLinearSearch(vector<int> array, int key) {
    int last = array[array.size() - 1];
    array[array.size() - 1] = key;
    //It saves the last element of the vector in the variable last.Then, it replaces the last element with the search key (key). This is the sentinel value used to terminate the search loop.
    int i = 0;
    while (array[i] != key) {
        i++;
    }
    array[array.size() - 1] = last;
    //After the loop, it restores the original last element of the vector.
    if (i < array.size() - 1 || last == key) {
        return i;
    } else {
        return -1;
    }
}
int main() {
    vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key = 5;
    int index =sentinelLinearSearch(array, key);
    if (index == -1) {
        cout << key << " is not found in the array ";
    } else {
        cout << key << " is found at index " << index << " in the array ";
    }
    return 0;
}
