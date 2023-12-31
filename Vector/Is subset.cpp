#include <iostream>
#include <algorithm>

using namespace std;

int BinarySearch(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        QuickSort(arr, low, pivot - 1);
        QuickSort(arr, pivot + 1, high);
    }
}

bool IsSubset(int arr1[], int n, int arr2[], int m)
{
    QuickSort(arr1, 0, n - 1);

    for (int i = 0; i < m; i++)
    {
        if (BinarySearch(arr1, 0, n - 1, arr2[i]) == -1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
        cin >> arr2[i];

    if (IsSubset(arr1, n, arr2, m))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
