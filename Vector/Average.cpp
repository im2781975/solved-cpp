#include<bits/stdc++.h>
using namespace std;
float getAverage(float* arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum / size;
}
int main()
{
    float arr[5]{ 10, 20, 30, 40, 50 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array Elements: ");
    for (int i = 0; i < n; i++) {
        printf("%.0f ", arr[i]);
    }
    cout<< "\nAverage is: "<< getAverage(arr,n) ;
    return 0;
}
