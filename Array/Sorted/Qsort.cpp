#include <bits/stdc++.h>
using namespace std;
 
int sort(vector<int>& array, int l, int h, int k)
{
    int mid = l + (h - l) / 2;
    //Choose middle element as pivot
    int i = max(l, mid - k), j = i,
        end = min(mid + k, h); 
    // Set appropriate range
    swap(array[mid],array[end]);
    // Swap middle and last element to
    while (j < end) 
    {
        if (array[j] < array[end]) {
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
        int q =sort(array,l, h, k);
        ksorter(array, l, q - 1, k);
        ksorter(array, q + 1, h, k);
    }
}
int main()
{
    vector<int> array({ 3, 3, 2, 1, 6, 4, 4, 5, 9, 7, 8, 11, 12 });
    int k = 3;
    cout << "Array before K sort\n";
    for (int& num : array)
        cout << num << ' ';
    cout << endl;
   
    ksorter(array, 0, array.size() - 1, k);
    cout << "Array after K sort\n";
    for (int& num : array)
        cout << num << ' ';
    return 0;
}
