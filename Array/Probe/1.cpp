#include<bits/stdc++.h>
using namespace std;
int poslt(int *arr, int lt, int rt, int key){
    while(rt - lt > 1){
        int mid = lt + (rt - lt) / 2;
        if(arr[mid] >= key)  rt = mid;
        else    lt = mid;
    }
    return rt;
}
int posrt(int *arr, int lt, int rt, int key){
    while(rt - lt > 1){
        int mid = lt + (rt - lt) / 2;
        if(arr[mid] <= key)  lt = mid;
        else    rt = mid;
    }
    return lt;
}
int cntfreq(int *arr, int n, int key){
    int lt = poslt(arr, -1, n - 1, key);
    int rt = posrt(arr, 0, n - 1, key);
    return (arr[lt] == key && key == arr[rt]) ? (rt - lt + 1) : 0;
}
int main(){
    int arr[] = {1, 1, 2, 3, 3, 3, 3, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    cout << cntfreq(arr, n, key) << " " << key << endl;
}
