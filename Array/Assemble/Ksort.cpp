#include <bits/stdc++.h>
using namespace std;
int sort(vector<int>& array, int l, int h, int k)
{
    int mid = l + (h - l) / 2; 
    int i = max(l, mid - k), j = i,end = min(mid + k, h);
    
    swap(array[mid], array[end]);
    while (j < end) {
        if (array[j] < array[end]) {
        //If array[j] (element at index j) is less than array[end] (pivot element at index end), 
        //then swap array[i] and array[j], and increment i.After this loop, elements less than the 
        //pivot are on the left side of array[i], and elements greater are on the right side.
            swap(array[i++], array[j]);
        }
        j = j + 1;
    }
    swap(array[end], array[i]);
    return i;
}
void ksorter(vector<int>& array, int l, int h, int k)
{
    if (l < h) {
        int q = sort(array, l, h, k);
        ksorter(array, l, q - 1, k);
        ksorter(array, q + 1, h, k);
    }
}
int main()
{
    vector<int> array(
        { 3, 3, 2, 1, 6, 4, 4, 5, 9, 7, 8, 11, 12 });
    int k = 3;
    ksorter(array, 0, array.size() - 1, k);
    cout << "Array after K sort\n";
    for (int& num : array)
        cout << num << ' ';
    return 0;
}
