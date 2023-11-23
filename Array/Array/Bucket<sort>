//sort an array of pos & neg numbers using bucket sort
#include <bits/stdc++.h>
using namespace std;

void bucketSort(vector<float> &arr, int n)
{
    //Create n empty buckets
    vector<float> b[n];
 
    //Put array elements in different buckets
    for (int i=0; i<n; i++)
    {
        int bi = n*arr[i]; 
        b[bi].push_back(arr[i]);
    }
    
    // Sort individual buckets
    for (int i=0; i<n; i++)
        sort(b[i].begin(), b[i].end());
 
    // 4) Concatenate all buckets into arr[]
    int index = 0;
    arr.clear();
    for (int i = 0; i < n; i++)
        for (int j = 0; j < b[i].size(); j++)
            arr.push_back(b[i][j]);
}

void sortMixed(float arr[], int n)
{
    vector<float>Neg ;
    vector<float>Pos;
 
    for (int i=0; i<n; i++)
    {
        if (arr[i] < 0)
        {
            Neg.push_back (-1 * arr[i]) ;
        }
        else
            Pos.push_back(arr[i]) ;
    }
    bucketSort(Neg, (int)Neg.size());
    bucketSort(Pos, (int)Pos.size());
 
    //store elements of Neg[] array
    // by converting into -ve
    for (int i=0; i<Neg.size();i++)
        arr[i] = -1 * Neg[ Neg.size() -1 - i];
 
    // store +ve element
    for(int j=Neg.size(); j<n; j++)
        arr[j] = Pos[j - Neg.size()];
}

int main()
{
    float arr[] = {-0.897, 0.565, 0.656,-0.1234, 0, 0.3434};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortMixed(arr, n);
 
    cout << "Sorted array is \n";
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}
