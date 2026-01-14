#include<bits/stdc++.h>
using namespace std;
int Ternary(int *arr, int l, int r, int key){ 
    while(r >= l){
        int mid = l + (r - l) / 3;
        int cent = r - (r - l) / 3;
        if(arr[mid] == key) return mid;
        if(arr[cent] == key) return cent;
        if(key < arr[mid]) r = mid - 1;
        else if (key > arr[cent]) l = cent + 1;
        else {
            l = mid + 1; r = cent - 1;
        }
    } 
    if(r >= l){
        int mid = l + (r - l) / 3;
        int cent = r - (r - l) / 3;
        if(arr[mid] == key) return mid;
        if(arr[cent] == key) return cent;
        if(key < arr[mid]) 
            return Ternary(arr, l, mid - 1, key);
        else if (key > arr[cent])
            return Ternary(arr, cent + 1, r, key);
        else {
            return Ternary(arr, mid + 1, cent - 1, key);
        }
    }
    return -1;
}
int main(){
    int arr[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 0, r = n - 1, key = 4;
    cout << Ternary(arr, l, r, key);
}
